#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isBalanced(const string& expr) {
    stack<char> s;

    for (char c : expr) {
        if (c == '(' || c == '[' || c == '{') {
            s.push(c);
        }
        else if (c == ')' || c == ']' || c == '}') {
            if (s.empty()) {
                return false;
            }

            char top = s.top();

            if ((c == ')' && top == '(') ||
                (c == ']' && top == '[') ||
                (c == '}' && top == '{')) {
                s.pop();
            }
            else {
                return false;
            }
        }
    }

    return s.empty();
}

int NumberOfBracketNeeded(const string& expr) {
    stack<char> s;
    int count = 0;

    for (char c : expr) {
        if (c == '(' || c == '[' || c == '{') {
            s.push(c);
        }
        else if (c == ')' || c == ']' || c == '}') {
            if (s.empty()) {
                count++;
            }
            else {
                char top = s.top();

                if ((c == ')' && top == '(') ||
                    (c == ']' && top == '[') ||
                    (c == '}' && top == '{')) {
                    s.pop();
                }
                else {
                    count++;
                    s.pop();

                    if (!s.empty()) {
                        char newTop = s.top();

                        if ((c == ')' && newTop == '(') ||
                            (c == ']' && newTop == '[') ||
                            (c == '}' && newTop == '{')) {
                            s.pop();
                        }
                        else {
                            count++;
                        }
                    }
                    else {
                        count++;
                    }
                }
            }
        }
    }

    count += s.size();

    return count;
}

int main() {
    string expr;

    cout << "Enter an expression: ";
    cin >> expr;

    if (isBalanced(expr)) {
        cout << "The expression is balanced." << endl;
    }
    else {
        cout << "The expression is not balanced." << endl;

        int bracketsNeeded = NumberOfBracketNeeded(expr);

        cout << "Number of brackets needed to balance the expression: "
             << bracketsNeeded << endl;
    }

    return 0;
}
