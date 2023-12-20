// A number is prime or not..
#include <iostream>
using namespace std;

void checkPrime(int num) //function declaration and defination  
{
    for (int i = 2; i * i <= num; i++) //loop
    {
        if (num % i == 0)//check 
        {
            cout << num << " is not Prime";
            return;
        }
    }
    cout << num << " is not Prime " << char(2);//type casting just for make output look effective..
}

// driver code
int main()
{
    int num;
    cout << "Enter a number:";
    cin >> num;
    checkPrime(num);//fucntion call with argguments..
    return 0;
}