//  WAP to find the factorial of a number (with and without recursion)

#include<iostream>
using namespace std;
int getFactOfNumber(int num);
int main(){
int num;
cout<<"Enter a number:";
cin>>num;

int fact=getFactOfNumber(num);
cout<<"Factorial of "<<num<<" is "<<fact;
    return 0;
}

int getFactOfNumber(int num){
    int fact=1;
    for (int i = 1; i <=num; i++)
    {
        fact=fact*i;
    }
    return fact;
}