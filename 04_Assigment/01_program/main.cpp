//. To find the length of a string
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

    void showLength()
    {
        int len=0;
        
    for (char character : str)
        {
            if (!isspace(character))
            {
                len++;
            }
            
        }
        cout<<"Length of the given strings is :"<<len;
    }
};

int main()
{
    findlength str;
    str.getStr();
    str.showLength();
    return 0;
}