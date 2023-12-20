// WAP to calculate the area and circumference of a circle.
#define pi 3.14
#include <iostream>
using namespace std;
float area(int r);
float cirsumference(int radius);

int main()
{
    int radius;
    int choise;
    cout << "Enter radius for circle";
    cin >> radius;
    cout << endl;

    cout << "Select an Option" << endl
         << "1) Area of circle" << endl
         << "2)Circumference of the circle";
    cin >> choise;
    
    switch (choise)
    {
    case 1:
        cout << area(radius);
        break;
    case 2:
        cout << cirsumference(radius);
        break;

    default:
        cout << "Opps! it's looks like you entered worng key :( try again";
    }
    return 0;
}

float area(int r)
{
    return pi * r * r;
}

float cirsumference(int r)
{
    return 2 * pi * r;
}