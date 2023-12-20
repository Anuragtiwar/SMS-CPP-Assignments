#include <iostream>
using namespace std;
// for the area of square..
int area(int s) { return (s * s); }
// for the area of rectangle..
int area(int l, int b) { return (l * b); }
// for the area of circle..
float area(float r) { return (3.14 * r * r); }
// for the area of triangle..
float area(float bs, float ht) { return ((bs * ht) / 2); }
int main() {
  int s, l, b;
  float r, bs, ht;
  cout << "Enter side of a square:";
  cin >> s;
  cout << "Enter length  of rectangle:";
  cin >> l;
  cout << "Enter breadth of rectangle:";
  cin >> b;
  cout << "Enter radius of circle:";
  cin >> r;
  cout << "Enter base of triangle:";
  cin >> bs;
  cout << "Enter height of triangle:";
  cin >> ht;
  cout << "Area of square is " << area(s) << endl;
  cout << "Area of rectangle is " << area(l, b) << endl;
  cout << "Area of circle is " << area(r) << endl;
  cout << "Area of triangle is " << area(bs, ht) << endl;
}
