// To find the sum of digits of a number
#include<iostream>
using namespace std;
int sumOfDigits(int num){
    int sum=0;// for storing the sum of all digits entered by user..
    int rem;//storing reminder..
    while (num!=0)
    {
       rem=num%10;
       sum=sum+rem;
       num/=10;
    }
    return sum;    
}
int main(){
int digits;
cout<<"Enter your digits:";
cin>>digits;
cout<<sumOfDigits(digits);//fucntion calling with arguments..
    return 0;
}