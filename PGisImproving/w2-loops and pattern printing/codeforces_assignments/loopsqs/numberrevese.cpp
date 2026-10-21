#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    if (n == 0) {
        cout << 0;
        return 0;
    }

    while (n > 0) {
        int temp = n % 10;
        cout << temp;
        n = n / 10;
    }

    return 0;
}