// WAP to reverse the digits of a number. 
#include<iostream>
using namespace std;

int reverse(int num);

int main(){
int digits;
cout<<"Enter digits:";
cin>>digits;
cout<<endl;

cout<<"Digits Before>>"<<endl;
cout<<digits;
cout<<endl;

cout<<"Digits after>>"<<endl;
cout<<reverse(digits);
cout<<endl;


    return 0;
}

int reverse(int num){
int rem,rev=0;
while (num!=0)
{
    rem=num%10;
    rev=rev*10+rem;
    num/=10;
}

return rev;
}