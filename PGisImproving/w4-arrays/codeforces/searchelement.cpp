#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;

    vector<int> arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);

    }
    bool search=false;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            search=true;
            break;
        }
    }
    if(search){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
}