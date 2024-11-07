#include <iostream>
using namespace std;

int main() {
    // Define prices of the products
    double priceA = 12.0; 
    double priceB = 13.0;  
    double priceC = 14.0;  
    
    // Declare variables for quantities
    int quantityA, quantityB, quantityC;
    
    // Ask user for quantities
    cout << "Enter the quantity for Product A ($12 each): ";
    cin >> quantityA;
    cout << "Enter the quantity for Product B ($13 each): ";
    cin >> quantityB;
    cout << "Enter the quantity for Product C ($14 each): ";
    cin >> quantityC;

    // Calculate total cost for each product
    double totalCostA = priceA * quantityA;
    double totalCostB = priceB * quantityB;
    double totalCostC = priceC * quantityC;
    
    // Calculate the total cost
    double totalCost = totalCostA + totalCostB + totalCostC;

    // Determine if shipping applies
    double shippingCost = 0.0;
    if (totalCost < 150) {
        shippingCost = 15.0;  // Add $15 shipping if total cost is less than $150
    } else {
        shippingCost = 0.0;  // Free shipping if total cost is $150 or more
    }

    // Calculate the final total after applying shipping
    double finalTotal = totalCost + shippingCost;

    // Determine loyalty points based on the final total
    int loyaltyPoints = (finalTotal > 300) ? 50 : 20;

    // Output the results
    cout << "\nTotal cost of each product:" << endl;
    cout << "Product A: " << quantityA << " x " << priceA << " = $" << totalCostA << endl;
    cout << "Product B: " << quantityB << " x " << priceB << " = $" << totalCostB << endl;
    cout << "Product C: " << quantityC << " x " << priceC << " = $" << totalCostC << endl;
    cout << "\nTotal Cost: $" << totalCost << endl;
    cout << "Shipping Cost: $" << shippingCost << endl;
    cout << "Final Total (Including Shipping): $" << finalTotal << endl;
    cout << "Loyalty Points: " << loyaltyPoints << " points" << endl;

    return 0;
}
