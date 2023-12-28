//To show method overriding using virtual functions.
#include <iostream>

// Using directive for the entire std namespace
using namespace std;

class MyClass {
public:
    MyClass() {
        cout << "Constructor called" << endl;
    }

    ~MyClass() {
        cout << "Destructor called" << endl;
    }

    void displayMessage() {
        cout << "Hello from MyClass!" << endl;
    }
};

int main() {
    MyClass obj;

    obj.displayMessage();

    return 0;
}
