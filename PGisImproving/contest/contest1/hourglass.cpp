#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
   //up
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i-1;j++){
            cout<<" ";
        }
        for(int j=1;j<=n-i+1;j++){
            cout<<".";
            if(j<n-i+1){
                cout<<" ";
            }
        }
        cout<<endl;

    }
    //down
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=n-i-1;j++){
            cout<<" ";
        }
        for(int j=1;j<=i+1;j++){
            cout<<".";
            if(j<i+1){
                cout<<" ";
            }
        }
        cout<<endl;

    }
}