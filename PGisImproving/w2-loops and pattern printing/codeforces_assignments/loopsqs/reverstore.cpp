#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long saveno=n;
    long long  reverse=0;
    if (n == 0) {
        cout << 0;
        return 0;
    }

    while (n > 0) {
        int temp = n % 10;
        reverse=reverse*10+temp;
        n = n / 10;
    }
   cout<<reverse;

    return 0;
}