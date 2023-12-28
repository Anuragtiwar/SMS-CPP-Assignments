//To show single inheritance. 
#include <iostream>

// Using directive for the entire std namespace
using namespace std;

// Base class
class Shape {
public:
    // Member function of the base class
    void displayShape() {
        cout << "This is a shape." << endl;
    }
};

// Derived class inheriting from the base class
class Circle : public Shape {
public:
    // Additional member function in the derived class
    void displayCircle() {
        cout << "This is a circle." << endl;
    }
};

int main() {
    // Create an object of the derived class
    Circle myCircle;

    // Access members from the base class
    myCircle.displayShape();

    // Access members from the derived class
    myCircle.displayCircle();

    return 0;
}
