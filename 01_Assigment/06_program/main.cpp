// Temperature of a city in Fahrenheit is input through a keyboard. WAP to convert this
// temperature into Centigrade. 

#include <iostream>
using namespace std;

// Function to convert Fahrenheit to Celsius
double fahrenheit_to_celsius(double fahrenheit) {
    double celsius = (fahrenheit - 32) * 5 / 9;
    return celsius;
}

int main() {
    double fahrenheit, celsius;
    
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;
    
    celsius = fahrenheit_to_celsius(fahrenheit);
    
    cout << fahrenheit << " Fahrenheit is equal to " << celsius << " Celsius." << endl;
    
    return 0;
}
