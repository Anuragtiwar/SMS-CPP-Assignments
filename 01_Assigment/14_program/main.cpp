#include <iostream>
using namespace std;
double power(double a, int b)
{
    double result = 1.0;

    if (b >= 0)
    {
        for (int i = 0; i < b; ++i)
        {
            result *= a;
        }
    }
    else
    {
        for (int i = 0; i > b; --i)
        {
            result /= a;
        }
    }

    return result;
}

int main()
{
    double a;
    int b;

    cout << "Enter the value of number: ";
    cin >> a;

    cout << "Enter the value of power: ";
    cin >> b;

    double result = power(a, b);

    cout << a << " raised to the power of " << b << " is: " << result << endl;

    return 0;
}
