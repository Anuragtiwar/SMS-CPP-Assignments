//To show the implementation of Constructors and destructor in a class.
#include <iostream>

using namespace std;

// Class definition
class MyClass {
public:
    // Constructor without parameters
    MyClass() {
        cout << "Constructor without parameters called" << endl;
    }

    // Constructor with parameters
    MyClass(int value) {
        cout << "Constructor with parameter called. Value: " << value << endl;
    }

    // Destructor
    ~MyClass() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    int val;
    // Creating objects of MyClass
    MyClass obj1;            // Calls default constructor

    cout<<"Enter a value for calling parameterized constructor";
    cin>>val;
    
    MyClass obj2(val);        // Calls parameterized constructor

    // The objects will be automatically destroyed when they go out of scope
    // Destructor will be called for each object

    return 0;
}
