#include <iostream>
using namespace std;

double expo(double number, int pow) {
    if (pow == 0) {
        return 1;
    }
    if (pow > 0) {
        return number * expo(number, pow - 1);
    } else {
        return (1.0 / number) * expo(number, pow + 1);
    }
}

int main() {
    double num;
    int pow;
    cin >> num >> pow;

    cout << expo(num, pow) << endl;
    return 0;
}