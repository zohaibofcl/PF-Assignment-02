#include <iostream>
using namespace std;
int main() {
    double totalAmount, finalAmount;
    int paymentMethod;
    cout << "Enter the total amount: ";
    cin >> totalAmount;

    cout << "Select Payment Method:";
    cout << "1. Credit Card (2% transaction fee)\n";
    cout << "2. PayPal (3% transaction fee)\n";
    cout << "3. Cash (No transaction fee)\n";
    cout << "Enter choice (1, 2, or 3): ";
    cin >> paymentMethod;

    double feePercentage = (paymentMethod == 1) ? 0.02 :
                           (paymentMethod == 2) ? 0.03 : 0.0;
    finalAmount = totalAmount * (1 + feePercentage);

    cout << "Final amount to be paid: $" << finalAmount << endl;
    return 0;
}
