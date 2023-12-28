// To show multilevel inheritance. 

#include <iostream>

// Base class
class Shape {
public:
    // Member function of the base class
    void displayShape() {
        std::cout << "This is a shape." << std::endl;
    }
};

// Intermediate class derived from Shape
class Circle : public Shape {
public:
    // Additional member function in the derived class
    void displayCircle() {
        std::cout << "This is a circle." << std::endl;
    }
};

// Derived class derived from Circle
class ColoredCircle : public Circle {
public:
    // Additional member function in the derived class
    void displayColoredCircle() {
        std::cout << "This is a colored circle." << std::endl;
    }
};

int main() {
    // Create an object of the derived class
    ColoredCircle myColoredCircle;

    // Access members from the base class
    myColoredCircle.displayShape();

    // Access members from the intermediate class
    myColoredCircle.displayCircle();

    // Access members from the derived class
    myColoredCircle.displayColoredCircle();

    return 0;
}
