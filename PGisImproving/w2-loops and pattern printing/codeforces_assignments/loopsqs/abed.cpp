#include <iostream>
using namespace std;

int main() {
    for (char i='A';i<='Z';i++) {
        cout << i;
        if (i < 'Z') cout << " ";
    }

    return 0;
}