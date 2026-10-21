#include <iostream>
using namespace std;

void fun(){
    static int x = 0;
    x++;
    cout << x << endl;
}

int main(){
    fun();
    fun();
    fun();
    return 0;
}

// Static variable: also known as class/function static variable.
// Only one copy is maintained throughout the program execution.
// It retains its value between function calls and is initialized only once.
