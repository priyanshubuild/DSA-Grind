#include <iostream>
#include <stack>
#include <string>
#include <cctype>
using namespace std;

int precedence(char c) {
    if (c == '^') return 3;
    else if (c == '*' || c == '/') return 2;
    else if (c == '+' || c == '-') return 1;
    else return -1;
}

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

string infixToPostfix(string s) {
    stack<char> st;
    string result = "";

    for (char c : s) {
        if (isalnum(static_cast<unsigned char>(c))) {
            result += c;
        }
        else if (c == '(') {
            st.push(c);
        }
        else if (c == ')') {
            while (!st.empty() && st.top() != '(') {
                result += st.top();
                st.pop();
            }
            if (!st.empty()) {
                st.pop(); // Pop the '(' from the stack
            }
        }
        else if (isOperator(c)) {
            while (!st.empty() && st.top() != '(' && (
                (c != '^' && precedence(st.top()) >= precedence(c)) ||
                (c == '^' && precedence(st.top()) > precedence(c))
            )) {
                result += st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    while (!st.empty()) {
        if (st.top() != '(') {
            result += st.top();
        }
        st.pop();
    }

    return result;
}
int main() {
    string infix;
    cout << "Enter an infix expression: ";
    cin >> infix;

    string postfix = infixToPostfix(infix);
    cout << "Postfix expression: " << postfix << endl;

    return 0;
}