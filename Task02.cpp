#include <iostream>
using namespace std;
int main() {
    
    double priceA = 21.0; 
    double priceB = 26.0;  
    double priceC = 25.0;  
    int quantityA, quantityB, quantityC;
    
    cout << "Enter the quantity for Product A: ";
    cin >> quantityA;
    cout << "Enter the quantity for Product B: ";
    cin >> quantityB;
    cout << "Enter the quantity for Product C: ";
    cin >> quantityC;

    double totalCostA = priceA * quantityA;
    double totalCostB = priceB * quantityB;
    double totalCostC = priceC * quantityC;
    double totalCost = totalCostA + totalCostB + totalCostC;
   double discountedTotal = (totalCost > 200) ? totalCost * 0.9 : totalCost;

    cout << "\nTotal cost of each product:" << endl;
    cout << "Product A: " << quantityA << " x " << priceA << " = $" << totalCostA << endl;
    cout << "Product B: " << quantityB << " x " << priceB << " = $" << totalCostB << endl;
    cout << "Product C: " << quantityC << " x " << priceC << " = $" << totalCostC << endl;
    cout << "\nOriginal Total Cost: $" << totalCost << endl;
    cout << "Discounted Total Cost: $" << discountedTotal << endl;

    return 0;
}
