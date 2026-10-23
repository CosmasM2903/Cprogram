// payroll system using functions
#include <iostream>
#include <string>
using namespace std;

// Function declarations
float calculateOvertimePay(float overtime_hours);
float calculateNetSalary(float basic_salary, float overtime_pay);
void displayPayslip(string employee_name, float basic_salary,
                    float overtime_hours, float overtime_pay,
                    float net_salary);

int main() {
    string employee_name;
    float basic_salary, overtime_hours;

    
    cout << "enter employee_name: ";
    cin >> employee_name;

    cout << "enter basic_salary: ";
    cin >> basic_salary;

    cout << "enter overtime_hours: ";
    cin >> overtime_hours;

    
    float overtime_pay = calculateOvertimePay(overtime_hours);

    float net_salary = calculateNetSalary(basic_salary, overtime_pay);

    displayPayslip(employee_name, basic_salary,
                   overtime_hours, overtime_pay, net_salary);

    
    return 0;
}

// Function definitions after main()

float calculateOvertimePay(float overtime_hours) {
    float hourly_rate = 200;
    return overtime_hours * hourly_rate;
}

float calculateNetSalary(float basic_salary, float overtime_pay) {
    return basic_salary + overtime_pay;
}

void displayPayslip(string employee_name, float basic_salary,
                    float overtime_hours, float overtime_pay,
                    float net_salary) {
    cout << "\n===== EMPLOYEE PAYSLIP =====" << endl;
    cout << "=================="<<endl; 
    cout << "Employee Name: " << employee_name << endl;
    cout << "Basic Salary: " << basic_salary << endl;
    cout << "Overtime Hours: " << overtime_hours << endl;
    cout << "Overtime Pay: " << overtime_pay << endl;
    cout << "Net Salary: " << net_salary << endl;
    cout << "==================="<<endl;
    cout << "==================="<<endl;
}