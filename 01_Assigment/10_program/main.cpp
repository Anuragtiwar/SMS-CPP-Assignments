// WAP to find the sum of digits of a number

#include<iostream>
using namespace std;

int sumOfDigits(int num);

int main(){

int digits;
cout<<"Enter digits:";
cin>>digits;

int sumResult=sumOfDigits(digits);
cout<<"Sum of digits ="<<sumResult;
    return 0;
}

int sumOfDigits(int num){
    int sum=0;
    int m=0;
    while (num!=0)
    {   
        m=num%10;
        sum=sum+m;
        num=num/10;
    }
   return sum;
}