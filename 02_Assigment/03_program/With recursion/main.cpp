#include<iostream>
using namespace std;
int printFibo(int num){
    if(num==0 || num==1){//base case
        return num;
    }else{
        return printFibo(num-1)+printFibo(num-2);
    }
}
int main(){
    int index;
cout<<"Enter a Index:";
cin>>index;
cout<<printFibo(index);
    return 0;
}