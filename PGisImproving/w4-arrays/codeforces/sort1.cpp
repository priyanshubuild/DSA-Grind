#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

    vector<int> arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);

    }
   int c0=0,c1=0;
   for(int i=0;i<n;i++){
    if(arr[i]==0){
        c0++;
    }
    else{
        c1++;
    }
   }

   for(int i=1;i<=c0;i++){
    cout<<"0 ";
   }
   for(int i=1;i<=c1;i++){
    cout<<"1 ";
   }

    cout<<endl;
}  
}