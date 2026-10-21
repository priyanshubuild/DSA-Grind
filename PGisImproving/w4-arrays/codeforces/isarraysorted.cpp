#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;

    vector<int> arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);

    }
    bool sort=true;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            sort=false;
            break;
           
        }
    }
    if(sort){
     cout<<"YES";
    }else{
        cout<<"NO";
    }
    
}