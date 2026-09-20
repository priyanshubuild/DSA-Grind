#include <iostream>
using namespace std;

void add(int a, int b) {
    cout << a + b << endl;
}

void add(double a, double b) {
    cout << a + b << endl;
}

int main() {
    add(2, 3);      // Calls int version
    add(2.5, 3.5);  // Calls double version
}

// the code snippet demonstrates function overloading in C++. The `add` function is defined twice: once for integer parameters and once for double parameters. When the `add` function is called with integer arguments, the integer version is executed, and when called with double arguments, the double version is executed. This allows the same function name to be used for different types of input, enhancing code readability and usability. 

