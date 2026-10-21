#include<iostream>
#include<vector>
using namespace std;
int main (){
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
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                for(int l=k+1;l<n;l++){
                    if(arr[i]-2*arr[j]+3*arr[k]-4*arr[l]==x){
                        count++;
                    }

                }
            }
        }
    }
    cout<<count<<endl;
}