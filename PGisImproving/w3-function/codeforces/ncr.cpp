#include<iostream>
using namespace std;

long long factorial( int n){
    long long fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}

int ncr(int n, int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}
int main(){
    int n,r;
    cin>>n>>r;
   cout<< ncr(n,r);
}