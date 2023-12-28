#include <iostream>

// Using directive for the entire std namespace
using namespace std;

// Base class 1
class Shape {
public:
    // Member function of the base class
    void displayShape() {
        cout << "This is a shape." << endl;
    }
};

// Base class 2
class Color {
public:
    // Member function of the second base class
    void displayColor() {
        cout << "This object has a color." << endl;
    }
};

// Derived class inheriting from both Shape and Color
class ColoredShape : public Shape, public Color {
public:
    // Additional member function in the derived class
    void displayColoredShape() {
        cout << "This is a colored shape." << endl;
    }
};

int main() {
    // Create an object of the derived class
    ColoredShape myColoredShape;

    // Access members from the first base class
    myColoredShape.displayShape();

    // Access members from the second base class
    myColoredShape.displayColor();

    // Access members from the derived class
    myColoredShape.displayColoredShape();

    return 0;
}
