#include <iostream>
using namespace std;

int reverseNumber(int n, int rev = 0) {

    if(n == 0){
        return rev;
    }
    int rem=n % 10;
    rev=rev * 10 + rem;
    return reverseNumber(n / 10, rev);
}

int main() {
    int n;
    cin>>n;
    cout<<reverseNumber(n);
    return 0;
   }