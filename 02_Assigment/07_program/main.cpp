// To convert a decimal number to binary and display the result. 
#include <iostream>
using namespace std;

void decimalToBinary(int num) {
    if (num > 1) {
        decimalToBinary(num / 2);//recursion..
    }
    cout << num % 2;
}

int main() {
    int decimalNumber;

    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    cout << "Binary representation: ";
    decimalToBinary(decimalNumber);

    cout << endl;

    return 0;
}

