#include <iostream>
using namespace std;

// Function to get customer details
void getCustomerDetails(char customerName[], double &unitsConsumed,double &rateperunit)
{
    cout << "Enter Customer Name: ";
    cin>>customerName;

    cout << "Enter Units Consumed: ";
    cin >> unitsConsumed;
    
    cout<<"Enter rate per unit:";
    cin>>rateperunit;
    
    
}

// Function to calculate bill
double calculateBill(double unitsConsumed, double rateperunit)
{
	
    return unitsConsumed * rateperunit;
}

// Function to apply discount
double applyDiscount(double totalBill, double unitsConsumed)
{
    if (unitsConsumed > 100)
    {
        return totalBill * 0.10; // 10% discount
    }
    return 0;
}

// Function to display bill
void displayBill(char customerName[], double unitsConsumed,
                 double totalBill, double discount,
                 double finalAmount)
{
    cout << "\n===== WATER BILL =====" << endl;
    cout << "Customer Name: " << customerName << endl;
    cout << "Units Consumed: " << unitsConsumed << endl;
    cout << "Bill Before Discount: " << totalBill << endl;
    cout << "Discount: " << discount << endl;
    cout << "Final Amount Payable: " << finalAmount << endl;
    cout <<"=========================="<<endl;
}

int main()
{
    char customerName[50];
    double unitsConsumed,rateperunit;
    double totalBill, discount, finalAmount;

    getCustomerDetails(customerName, unitsConsumed,rateperunit);

    totalBill = calculateBill(unitsConsumed, rateperunit);

    discount = applyDiscount(totalBill, unitsConsumed);

    finalAmount = totalBill - discount;

    displayBill(customerName, unitsConsumed,
                totalBill, discount, finalAmount);

    return 0;
}