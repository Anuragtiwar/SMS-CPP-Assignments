// Ramesh’s basic salary is input through the keyboard. His Dearness Allowance is 40% of the basic salary and House Rent Allowance is 20% of the basic salary. WAP to calculate his gross salary. 

#include <iostream>
using namespace std;

int main() {
    double basicSalary, dearnessAllowance, houseRentAllowance, grossSalary;

    cout << "Enter Ramesh's basic salary: ";
    cin >> basicSalary;

    dearnessAllowance = 0.4 * basicSalary; // 40% of basic salary
    houseRentAllowance = 0.2 * basicSalary; // 20% of basic salary

    grossSalary = basicSalary + dearnessAllowance + houseRentAllowance;

    cout << "Dearness Allowance: " << dearnessAllowance << endl;
    cout << "House Rent Allowance: " << houseRentAllowance << endl;
    cout << "Gross Salary: " << grossSalary << endl;

    return 0;
}
