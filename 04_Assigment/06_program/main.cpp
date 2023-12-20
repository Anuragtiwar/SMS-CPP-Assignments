// To Check Whether a Character Is Uppercase, Lowercase Alphabet A Digit Or A Special
// Symbol.

#include <iostream>
using namespace std;
class checkAlphabet
{
private:
    char ch;

public:
    void getChar()
    {
        cout << "Enter your Charecter here:";
        cin >> ch;
    }

    void checkCharacterType()
    {
        if (ch >= 'A' && ch <= 'Z')
        {
            cout << ch << " is an uppercase alphabet.\n";
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            cout << ch << " is a lowercase alphabet.\n";
        }
        else if (ch >= '0' && ch <= '9')
        {
            cout << ch << " is a digit.\n";
        }
        else
        {
            cout << ch << " is a special symbol.\n";
        }
    }
};
int main(){
    checkAlphabet newCheck;
    newCheck.getChar();
    newCheck.checkCharacterType();
    return 0;
}