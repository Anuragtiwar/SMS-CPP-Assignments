//  To check the validity of an expression. 
#include <iostream>
#include <stack>
#include <string>

using namespace std;

class ExpressionValidator {
private:
    stack<char> parenthesesStack;

public:
    // Constructor
    ExpressionValidator() {}

    // Member function to check the validity of the expression
    bool isValidExpression(const string& expression) {
        for (char ch : expression) {
            if (ch == '(' || ch == '[' || ch == '{') {
                parenthesesStack.push(ch);
            } else if (ch == ')' || ch == ']' || ch == '}') {
                if (parenthesesStack.empty()) {
                    return false; // Closing parenthesis without a matching opening parenthesis
                }

                char openParen = parenthesesStack.top();
                parenthesesStack.pop();

                // Check if the closing parenthesis matches the last opening parenthesis
                if ((ch == ')' && openParen != '(') ||
                    (ch == ']' && openParen != '[') ||
                    (ch == '}' && openParen != '{')) {
                    return false;
                }
            }
        }

        // The expression is valid if the stack is empty at the end
        return parenthesesStack.empty();
    }
};

int main() {
    // Create an instance of the ExpressionValidator class
    ExpressionValidator expressionValidator;

    string expression;

    // Get expression input from the user
    cout << "Enter an expression: ";
    getline(cin, expression);

    // Check the validity of the expression using the class method
    if (expressionValidator.isValidExpression(expression)) {
        cout << "The expression is valid." << endl;
    } else {
        cout << "The expression is not valid." << endl;
    }

    return 0;
}
