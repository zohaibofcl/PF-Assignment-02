#include <iostream>
using namespace std;
int main() {
   
    double priceA = 10.0;  
    double priceB = 20.0;  
    double priceC = 15.0;  
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

    cout << "\nTotal cost of each product:" << endl;
    cout << "Product A: " << quantityA << " x " << priceA << " = $" << totalCostA << endl;
    cout << "Product B: " << quantityB << " x " << priceB << " = $" << totalCostB << endl;
    cout << "Product C: " << quantityC << " x " << priceC << " = $" << totalCostC << endl;
    cout << "\nOverall Total Cost: $" << totalCost << endl;

    return 0;
}
