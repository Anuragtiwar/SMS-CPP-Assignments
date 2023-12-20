#include <iostream>
using namespace std;

// create a class
class OddOrEven {
  // a int type private data member
 private:
  int number;

  // a public function with an int type parameter
 public:
  void oddoreven(int n) {
    // copying values of parameters in data members
    number = n;

    // if condition to check if a number is even by dividing it by 2
    if (number % 2 == 0) {
      cout << number << " is an even number." << endl;
    }

    // else to return if it is not even then it is odd
    else {
      cout << number << " is an odd number." << endl;
    }
  }
};

int main() {
  // create a object
  OddOrEven O;

  // an int type variable to store number
  int number;

  cout << "Enter Number: ";
  cin >> number;

  // calling function using object
  O.oddoreven(number);

  return 0;
}
