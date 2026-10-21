#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long arr[n-1];
    for(int i=0;i<n;i++){
         long long x;
        cin>>x;
        arr[i]=x;
    }
   long long sum=0;
   for(int i=0;i<n;i++){
    sum+=arr[i];
   }
   cout<<sum;
}