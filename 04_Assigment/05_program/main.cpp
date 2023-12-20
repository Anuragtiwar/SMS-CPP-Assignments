//To Compare two strings
#include <iostream>
using namespace std;
class compare
{

private:
    string str1, str2;

public:
    void getValue()
    {
        cout << "Enter two strings:";
        cin >> str1 >> str2;
    }
    void Compare()
    {
        if (str1 == str2)
        {
            cout << "The strings are equal." << endl;
        }
        else
        {
            cout << "The strings are not equal." << endl;
        }
    }
};

int main(){
compare strcmp;
strcmp.getValue();
strcmp.Compare();
    return 0;
}