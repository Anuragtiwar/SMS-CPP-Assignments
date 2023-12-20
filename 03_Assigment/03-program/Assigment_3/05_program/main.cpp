#include <iostream>
using namespace std;

// create a class
class Palindrome {
  // int type private data member
 private:
  int number;

  // public function with a int type parameter
 public:
  void isPalindrome(int n) {
    // copying value of parameter in data member
    number = n;

    // int type variables for operations
    int remain, reverse = 0;

    // while loop for reversing the number
    while (number) {
      // the last digit of number is stored in remain by % operator
      remain = number % 10;

      // the number which is in remain will be added
      // in reverse with a multiply of 10 at each iteration
      reverse = (reverse * 10) + remain;

      // number is divided by 10 to discard the last digit
      number = number / 10;
    }

    // if condition to check if the reversed number is as same as the number
    if (n == reverse) {
      cout << n << " is a Palindrome." << endl;
    }

    // else if it is not palindrome or same
    else {
      cout << n << " is not a Palindrome." << endl;
    }
  }
};

int main() {
  // create a object
  Palindrome P;

  // int type variable to store number
  int number;

  cout << "Enter Number:";
  cin >> number;

  // calling function using object
  P.isPalindrome(number);

  return 0;
}
