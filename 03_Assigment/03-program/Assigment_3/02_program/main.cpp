//sum of Digits...
#include <iostream>

using namespace std;

// create a class
class Sum {
  // private data member
  private:
    int number;

  // public functions
  public:
    // getNumber() function to get the number
    void getNumber() {
      cout << "Enter Number:";
      cin >> number;
    }

  // add() function to find the Sum of 
  // all digits of the number
  int add() {
    int sum = 0, remain;

    while (number) {
      // the last digit of number is stored 
      // in remain by % operator
      remain = number % 10;

      // remain is added in the sum
      sum = sum + remain;

      // number is divided by 10 to 
      // discard the last digit
      number = number / 10;
    }

    // returning the sum
    return sum;
  }
};

int main() {
  // create an object
  Sum S;

  // int type variable to store the 
  // sum of all digits in it
  int sum;

  // function is called by the object to 
  // store the number
  S.getNumber();

  // add() function to add all digits 
  // of the number
  sum = S.add();

  cout << "Sum of all digits of the number is " << sum;

  return 0;
}
