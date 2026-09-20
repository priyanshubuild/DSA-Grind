#include <iostream>
#include <stack>
#include <string>
#include <cmath>
#include <cctype>
using namespace std;    

int evaluatePostfix(const string& postfix) {
    stack<int> s;

    for (char c : postfix) {
        if (c == ' ') {
            continue;
        }
        if (isdigit(static_cast<unsigned char>(c))) {
            s.push(c - '0'); // Convert char digit to int
        } else if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^') {
            if (s.size() < 2) continue;
            int val2 = s.top(); s.pop();
            int val1 = s.top(); s.pop();

            switch (c) {
                case '+': s.push(val1 + val2); break;
                case '-': s.push(val1 - val2); break;
                case '*': s.push(val1 * val2); break;
                case '/': s.push(val2 != 0 ? (val1 / val2) : 0); break;
                case '^': s.push(round(pow(val1, val2))); break;
            }
        }
    }

    return s.empty() ? 0 : s.top();
}
int main() {
    string postfix;
    cout << "Enter a postfix expression: ";
    cin >> postfix; 
    cout << "Result: " << evaluatePostfix(postfix) << endl;
    return 0;
}