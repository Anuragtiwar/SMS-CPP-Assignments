//To check whether the given number is palindrome or not
#include<iostream>
using namespace std;
int checkPalindrome(int num){
    int rev=0;//for retruning the reverse of the number
    int rem;//storing the reminder after deviding by 10..
    while (num!=0)  
    {
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }
    return rev;//rev is the revered number 
}
int main(){
    int num;
cout<<"Enter a number:";
cin>>num;
if (num==checkPalindrome(num))//checking number is matching with number entered by user..
{
    cout<<num<<" is a palindrome number.";
}else{
    cout<<num<<" is not a palindrome number.";
}

    return 0;
}