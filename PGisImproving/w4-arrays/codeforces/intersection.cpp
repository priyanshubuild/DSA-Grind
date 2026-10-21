#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n;

    vector<int> arr1,arr2,result;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr1.push_back(x);
    }  
    cin>>m;
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        arr2.push_back(x);
    }  

    vector<bool> used(m,false);
    
    for(int i=0;i<n;i++){
        
        for(int j=0;j<m;j++){
            if(arr1[i]==arr2[j]&&used[j]==false){
                result.push_back(arr1[i]);
                used[j]=true;
                break;
            }
        }

    }
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;
  
}
}