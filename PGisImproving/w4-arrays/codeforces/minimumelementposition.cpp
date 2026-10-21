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
    int min=arr[0];
    int pos=0;
    for(int i=0;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
            pos=i;
        }
    }
    
 cout<<min<<" "<<pos+1;
    
}