#include <iostream>
using namespace std;
int main() {
    double totalAmount, finalAmount;
    int location;
    cout << "Enter the total amount before tax: ";
    cin >> totalAmount;
    cout << "Enter your location (region number):\n";
    cout << "1. Region 1 (5% tax)\n";
    cout << "2. Region 2 (10% tax)\n";
    cout << "3. Region 3 (8% tax)\n";
    cout << "Enter choice (1, 2, or 3): ";
    cin >> location;

    double taxRate = (location == 1) ? 0.05 :
                     (location == 2) ? 0.10 :
                     (location == 3) ? 0.08 : 0.0;
    finalAmount = totalAmount * (1 + taxRate);

    cout << "Final amount to be paid after tax: $" << finalAmount << endl;
    return 0;
}
