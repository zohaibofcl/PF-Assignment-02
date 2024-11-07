#include <iostream>
#include <string>
using namespace std;
int main() {
    double totalAmount;
    string couponCode;
    const string validCoupon = "SAVE10"; 
    const double couponDiscount = 10.0;   
    cout << "Enter the total amount: ";
    cin >> totalAmount;
    cout << "Enter coupon code (if any): ";
    cin >> couponCode;

    if (couponCode == validCoupon) {
        totalAmount -= couponDiscount;
        cout << "Coupon applied! You saved $" << couponDiscount << endl;
    } else {
        cout << "Invalid or no coupon applied." << endl;
    }
    cout << "Final amount to be paid: $" << totalAmount << endl;
    return 0;
}
