// To implement string concatenation. 
#include<iostream>
#include<string>
using namespace std;

class strConcate{

private:
string str1,str2;

public: 
void getStr(){
    cout<<"Enter First strign:" ;
    cin>>str1;
    cout<<"Enter Second strign:" ;
    cin>>str2;
}

void concateStr(){
    cout<<"Your String after Concatenation: "<<str1+str2;
}

};

int main(){
 strConcate obj1;
 obj1.getStr();
 obj1.concateStr();
    return 0;
}
