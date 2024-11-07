#include <iostream>
using namespace std;
int main() {
    
    double priceA = 12.0; 
    double priceB = 13.0;  
    double priceC = 14.0;  
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

    double shippingCost = 0.0;
    if (totalCost < 150) {
        shippingCost = 15.0;  
    } else {
        shippingCost = 0.0; 
    }

    double finalTotal = totalCost + shippingCost;
    cout << "\nTotal cost of each product:" << endl;
    cout << "Product A: " << quantityA << " x " << priceA << " = $" << totalCostA << endl;
    cout << "Product B: " << quantityB << " x " << priceB << " = $" << totalCostB << endl;
    cout << "Product C: " << quantityC << " x " << priceC << " = $" << totalCostC << endl;
    cout << "\nTotal Cost: $" << totalCost << endl;
    cout << "Shipping Cost: $" << shippingCost << endl;
    cout << "Final Total (Including Shipping): $" << finalTotal << endl;

    return 0;
}
