//  Show Function Overloading by implementing addition operation
//fucntion for adding of two number and strings  with function over loading..
#include <iostream>
using namespace std;

// with function with defferent parameter...
int add(int a, int b)
{
    return a + b;
}

// same function but defferent parameter..
string add(string a, string b)
{
    return a +" "+b;
}

int main()
{
    int num1, num2;
    string str1, str2;
    // Taking the value for integer fucntion...
    cout << "Enter first numbers for addition:";
    cin >> num1;

    cout << "Enter second numbers for addition:";
    cin >> num2;

    // calling add function with integer parameter..
    cout << "SUM of given tow numbers is:" << add(num1, num2)<<endl;


    // taking values in string to add usere's first and second name...
    cout << "Enter your first Name:";
    cin >> str1;

    cout << "Enter your second Name:";
    cin >> str2;

    // calling add functiuon with string parameter..
    cout << "Your full name is: " << add(str1, str2) << endl;

    return 0;
}