#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for( int i=1;i<=n;i++){
        bool bin=true;
        if(i%2!=0){
            bin=false;

        }
        for(int j=1;j<=i;j++){
            cout<<bin;
            if(bin){
                bin=false;
            }
            else{
                bin=true;
            }
        }
        cout<<endl;
    }
    
}