// To check whether a string is palindrome or not.
#include <iostream>
using namespace std;

class checkPalindrome
{
private:
    string str;

public:
    void getStr()
    {
        cout << "Enter an string:";
        cin >> str;
    }

    void isPalindrome()
    {
        // Get the length of the string
        int length = str.length();

        // Check for palindrome by comparing characters from start and end
        for (int i = 0; i < length / 2; ++i)
        {
            if (str[i] != str[length - 1 - i])
            {
                cout << "Your string is not a palindrome string";
                return;
            }
        }
        cout << "Your string is a palindrome string";
    }
};

int main()
{
    checkPalindrome ForStr;
    ForStr.getStr();
    ForStr.isPalindrome();

    return 0;
}
