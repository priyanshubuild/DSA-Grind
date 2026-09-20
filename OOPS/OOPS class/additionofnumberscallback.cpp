#include <iostream>
using namespace std;

// Callback function to perform addition
int add(int a, int b) {
    return a + b;
}

// Function that accepts a callback function pointer
void calculate(int a, int b, int (*callback)(int, int)) {
    cout << "Addition using callback: " << callback(a, b) << endl;
}

int main() {
    int x = 10, y = 20;
    calculate(x, y, add);
    return 0;
}
