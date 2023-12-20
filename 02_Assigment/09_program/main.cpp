//To convert a decimal number to hexadecimal and display the result. 
#include <iostream>
using namespace std;

int main() {
    int decimalNumber;

    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    cout << "Hexadecimal representation: ";
    cout << hex << decimalNumber << endl;

    return 0;
}
