// To print all the prime numbers within a given range
#include <iostream>
#include<iomanip>
using namespace std;
bool checkPrime(int num){
    for (int  i = 2; i*i<=num; i++)
    {
        if (num%i==0)
        {
            return false;
        }
        
    }
    return true;
}

void printPrime(int start ,int end)
{
    for (int i = start; i<= end; i++)
    {
        if(checkPrime(i)){
            cout<<i<<setw(3);
        }
    }
    cout<<endl;
}

int main()
{
    int start;
    int end;
    cout << "Enter the start range point:";
    cin >> start;

    cout << "Enter the end range point:";
    cin >> end;

    printPrime(start,end);

    return 0;
}