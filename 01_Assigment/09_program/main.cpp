// WAP to swap two numbers without using a third variable.

#include <iostream>
using namespace std;

void swap(int a, int b);

int main()
{
    int num1, num2;

    cout << "Enter first number:";
    cin >> num1;
    cout << "Enter second number:";
    cin >> num2;
    cout << endl;

    cout << "After Swap>>" << endl;
    cout << "Num1= " << num1 << endl;
    cout << "Num2= " << num2 << endl;
    cout << "Before Swap>>" << endl;

    swap(num1, num2);

    return 0;
}

void swap(int a, int b)
{
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "Num1= " << a << endl;
    cout << "Num2= " << b << endl;
}