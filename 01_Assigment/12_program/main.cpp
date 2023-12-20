// WAP to generate the table of a number N.

#include <iostream>
using namespace std;

void GenTable(int table);
int main()
{
    int num;
    cout << "Enter a number:";
    cin >> num;
    GenTable(num);
    return 0;
}

void GenTable(int table)
{
    int temp;
    for (int i = 1; i <= 10; i++)
    {
        temp = table * i;
        cout << temp << endl;
    }
}