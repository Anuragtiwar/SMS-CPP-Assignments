// WAP to find maximum of three numbers. 
#include<iostream>
using namespace std;

void findMax(int a, int b,int c);
int main(){

int num1,num2,num3;

 cout<<"Enter first number:";
 cin>>num1;

 cout<<"Enter Second number:";
 cin>>num2;

 cout<<"Enter Third number:";
 cin>>num3;
 cout<<endl;

findMax(num1,num2,num3);

    return 0;
}

void findMax(int a, int b,int c){
    if(a>b && a>c){
        cout<<a<<" is the greter number";
         cout<<endl;
    }else if(b>a && b>c){
        cout<<b<<" is the greter number";
         cout<<endl;
    }else{
        cout<<c<<" is the greter number";
         cout<<endl;
    }
}