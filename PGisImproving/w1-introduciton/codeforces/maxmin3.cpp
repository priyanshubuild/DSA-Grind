#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
   cout<<"Min = "<<min(a,min(b,c))<<endl;
   cout<<"Max = "<<max(a,max(b,c))<<endl;
}