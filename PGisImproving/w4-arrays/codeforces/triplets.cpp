#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n;
vector<int> arr;
    for(int i=0;i<n;i++){
        int z;
        cin>>z;
        arr.push_back(z);
    }  
    cin>>x;
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
             if(arr[i]+arr[j]+arr[k]==x){
                count++;
             }
        }
    }
}
    cout<<count<<endl;
    
}
}
