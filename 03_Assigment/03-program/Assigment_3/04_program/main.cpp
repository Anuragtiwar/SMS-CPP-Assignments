#include <iostream>
using namespace std;

// create a class
class IsPrime {
  // declare private data members
 private:
  int start, end;

  // public functions
 public:
  // getRange() function to insert range
  void getRange() {
    cout << "Enter Range:";
    cin >> start >> end;
  }

  // isPrime() function to print prime numbers in between range
  bool checkPrime(int num) {

    for (int i = 2; i * i <= num; i++) {
     if(num%i==0){
      return false;
     }
    }
    return true;
  }

  void PrintPrime(){
    cout << "Prime Numbers in the range " << start << " to " << end << " are " << endl;
    for (int i = start;i<=end; i++)
    {
      if (checkPrime(i))
      {
        cout<<" "<<i;
      }
    }
    cout<<endl;
  }
};

int main() {
  // create a object
  IsPrime P;

  // calling getRange() function to insert range
  P.getRange();

  // IsPrime() function search prime numbers in the range
  P.PrintPrime();

  return 0;
}
