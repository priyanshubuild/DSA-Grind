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
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            count++;
           
        }
    }
    cout<<count;
    
}