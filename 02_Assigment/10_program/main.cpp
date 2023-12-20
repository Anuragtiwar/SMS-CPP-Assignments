#include <iostream>
using namespace std;
void printTable(int num)
{
    int table;
    for (int i = 1; i <= 10; i++)
    {
        cout << num * i << endl;
    }
}
int main()
{
    int num;
    cout << "Enter a number:";
    cin >> num;
    printTable(num);
    return 0;
}