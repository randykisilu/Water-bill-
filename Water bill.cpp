#include <iostream>
using namespace std;

string customerName;
float unitsConsumed;
float ratePerUnit;

// Function to get customer details
void getCustomerDetails() {
    cout << "Enter customer name: ";
    getline(cin, customerName);

    cout << "Enter units consumed: ";
    cin >> unitsConsumed;

    cout << "Enter rate per unit: ";
    cin >> ratePerUnit;
}

// Function to calculate bill
double calculateBill() {
    return unitsConsumed * ratePerUnit;
}

// Function to calculate discount
double applyDiscount(double bill) {
    if (unitsConsumed > 100) {
        return bill * 0.10;
    }

    return 0.0;
}

// Function to display bill
void displayBill() {
    double bill = calculateBill();
    double discount = applyDiscount(bill);
    double finalAmount = bill - discount;

    cout << "\n========== WATER BILL ==========" << endl;
    cout << "Customer Name        : " << customerName << endl;
    cout << "Units Consumed       : " << unitsConsumed << endl;
    cout << "Total Before Discount: " << bill << endl;
    cout << "Discount             : " << discount << endl;
    cout << "Final Amount Payable : " << finalAmount << endl;
    cout << "================================" << endl;
}

int main() {
    getCustomerDetails();
    displayBill();

    return 0;
}