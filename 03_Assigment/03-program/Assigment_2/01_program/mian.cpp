#include <iostream>
using namespace std;

// Create a class
class Reverse {
  // Private data member
 private:
  int number;

  // Public function with an int type parameter
 public:
  void reverse(int n) {
    // Copying value of parameter in the data member
    number = n;

    // Declaring two int type variable for storing reversed
    // number and operations
    int remain, reverse = 0;

    // While loop for reversing the number
    while (number) {
      // The last digit of number is stored in remain
      // by % operator
      remain = number % 10;

      // The number which is in remain will be added in reverse
      // with a multiply of 10 at each iteration
      reverse = (reverse * 10) + remain;

      // Number is divided by 10 to discard the last digit
      number = number / 10;
    }

    // Printing the reversed number
    cout << "Reverse of " << n << " is " << reverse << endl;
  }
};

int main() {
  // Create an object
  Reverse R;

  // int type variable to store number
  int number;

  cout << "Enter Number: ";
  cin >> number;

  // calling function using object
  R.reverse(number);

  return 0;
}
