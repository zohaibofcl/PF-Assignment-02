#include <iostream>
using namespace std;
int main() {
    
    double priceA = 18.0; 
    double priceB = 17.0;  
    double priceC = 11.0;  
    int quantityA, quantityB, quantityC;
    
    cout << "Enter the quantity for Product A : ";
    cin >> quantityA;
    cout << "Enter the quantity for Product B : ";
    cin >> quantityB;
    cout << "Enter the quantity for Product C : ";
    cin >> quantityC;

    double totalCostA = priceA * quantityA;
    double totalCostB = priceB * quantityB;
    double totalCostC = priceC * quantityC;
    double totalCost = totalCostA + totalCostB + totalCostC;
    
    double discountedTotal = (totalCost > 200) ? totalCost * 0.9 : totalCost;

    double shippingCost = 0.0;
    if (discountedTotal < 150) {
        shippingCost = 15.0;  
    } else {
        shippingCost = 0.0;  
    }
    double finalTotal = discountedTotal + shippingCost;
    int loyaltyPoints = (finalTotal > 300) ? 50 : 20;

    cout << "\n------ Order Summary ------" << endl;
    cout << "Total cost of each product:" << endl;
    cout << "Product A: " << quantityA << " x " << priceA << " = $" << totalCostA << endl;
    cout << "Product B: " << quantityB << " x " << priceB << " = $" << totalCostB << endl;
    cout << "Product C: " << quantityC << " x " << priceC << " = $" << totalCostC << endl;
    cout << "\nTotal Cost (Before Discount): $" << totalCost << endl;
    cout << "Discounted Total Cost: $" << discountedTotal << endl;
    cout << "Shipping Cost: $" << shippingCost << endl;
    cout << "Final Total (Including Shipping): $" << finalTotal << endl;
    cout << "Loyalty Points: " << loyaltyPoints << " points" << endl;

    return 0;
}

