//C++ Basics
//phone sales and receipts
#include <iostream>
using namespace std;

int main() {
    // Declare variables
    string customerName;
    string phoneModel;
    int quantity;
    double pricePerPhone, totalSales;

    // Prompt user for input
    cout << "Enter Customer Name: ";
    cin >> customerName;

    cout << "Enter Phone Model Purchased: ";
    cin >> phoneModel;

    cout << "Enter Quantity Bought: ";
    cin >> quantity;

    cout << "Enter Price per Phone: ";
    cin >> pricePerPhone;

    // Calculate total sales
    totalSales = quantity * pricePerPhone;

    // Display the receipt
    cout << "------------------- Sales Receipt -------------------" << endl;
    cout << "Customer Name: " << customerName << endl;
    cout << "Phone Model: " << phoneModel << endl;
    cout << "Quantity Bought: " << quantity << endl;
    cout << "Price per Phone: Ksh " << pricePerPhone << endl;
    cout << "Total Sales Amount: Ksh " << totalSales << endl;
    cout << "-----------------------------------------------------" << endl;

    
}