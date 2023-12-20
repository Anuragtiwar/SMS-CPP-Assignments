//WAP to print the ASCII value of a character entered through the keyboard. 

#include<iostream>
using namespace std;
void changeToASCII(char ch);
int main(){
    char ch;
cout<<"Enter a your number:";
cin>>ch;
cout<<endl;

changeToASCII(ch);

    return 0;
}

void changeToASCII(char ch){
    cout<<"The ASCII value of "<<ch<<" is:"<<int(ch);
}