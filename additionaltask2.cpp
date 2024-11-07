#include <iostream>
using namespace std;
int main() {
    double totalAmount, discountedAmount;
    int customerType;

    cout << "Enter the total amount after any existing discounts: ";
    cin >> totalAmount;
    cout << "Enter customer type:\n";
    cout << "1. Regular Customer (No additional discount)\n";
    cout << "2. VIP Customer (5% additional discount)\n";
    cout << "Enter choice (1 or 2): ";
    cin >> customerType;

    double discount = (customerType == 2) ? 0.05 : 0.0;
    discountedAmount = totalAmount * (1 - discount);
    cout << "Final amount to be paid: $" << discountedAmount << endl;
    return 0;
}
