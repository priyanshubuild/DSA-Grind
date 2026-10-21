#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
   int count=0;
   for(int i=1;i<=n;i++){
    int x;
    cin>>x;
    if((x!=0&&18%x==0)||x%45==0){
        count++;
    }
   }
   cout<<count;
}