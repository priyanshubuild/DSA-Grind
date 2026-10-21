#include<iostream>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);

}

int main(){

    int n;
    cout<<"enter the number:"<<endl;
    cin>>n;
   int a=fact(n);
   cout<<a;
}