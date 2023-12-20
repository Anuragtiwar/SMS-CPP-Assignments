//. To replace a character in a string.

#include <iostream>
#include <string>
using namespace std;

class findlength
{
private:
    string str;

public:
    void getStr()
    {
        cout << "Enter a string:";
        getline(cin, str);
    }

    void replaceChar()
    {
        int len = 0;
        char charToReplace, replacementChar;

        cout << "Enter the character to replace: ";
        cin >> charToReplace;

        cout << "Enter the replacement character: ";
        cin >> replacementChar;

        for (char &character : str)
        {
            if (character == charToReplace)
            {
                character = replacementChar;
            }
        }
        cout << "Length of the given strings is :" << str;
    }
};

int main()
{
    findlength str;
    str.getStr();
    str.replaceChar();
    return 0;
}