// WAP to determine if a number is +ve/-ve or zero. Display the message accordingly. 
#include<iostream>
using namespace std;

void check(int num);
int main(){
    int num;
cout<<"Enter your number:";
cin>>num;

//checking number is +ve\-ve or zero 
check(num);

    return 0;
}

void check(int num){
if(num<0){
    cout<<"Your number is a `NEGATIVE NUMBER`";
}else if(num>0){
cout<<"Your number is a `POSITIVE NUMBER`";
}else{
    cout<<"You entered `ZERO`";
}
}
