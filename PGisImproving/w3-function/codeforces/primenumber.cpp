#include<iostream>
using namespace std;
void isprime(int n){
    if(n<=1){
        cout<<"Not Prime";
        return;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"Not Prime";
            return;
        }

    }
    cout<<"Prime";
}
int main(){
    int n;
    cin>>n;
    isprime(n);
}