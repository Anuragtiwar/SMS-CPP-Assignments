//print talbe of  N number....
#include <iostream>
using namespace std;

// create a class
class TABLE {
  // private data member
 private:
  int number;

  // public member functions
 public:
  // getNumber() function to insert number
  void getNumber() {
    cout << "Enter Number: ";
    cin >> number;
  }

  // table() function to print table
  // of inserted number
  void table() {
    // for loop to print the table
    for (int index = 1; index <= 10; index++) {
      // this statement will print the table in form of 2*1=2
      cout << number << "*" << index << " = " << number * index << endl;
    }
  }
};

int main() {
  // creating an object
  TABLE T;

  // calling getNumber() function to 
  // insert number
  T.getNumber();

  // calling table() function to print table 
  // of inserted number
  T.table();

  return 0;
}
