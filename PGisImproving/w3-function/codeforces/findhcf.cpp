#include<iostream>
using namespace std;
int hcf(int a,int b){
    int ans=1;
  for(int i=1;i<=min(a,b);i++){
    if(a%i==0&&b%i==0){
        ans=i;
    }
  }
  return ans;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<hcf(a,b);
}