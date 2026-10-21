#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter the numbers { n m } with space :";
    cin >> n>>m;
    for ( int i=1 ; i<=n;i++){
        for ( int j=1;j<=m;j++){
         if(i==n||i==1||j==1||j==m){
            cout<<"*";
         }
         else{
            cout<<" ";
         }
        }
        cout<<endl;
    }
} 