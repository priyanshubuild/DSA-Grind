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
  int unique;
  for(int i=0;i<n;i++){
    int uniquechk=arr[i];
    int count=0;
    for(int j=0;j<n;j++){
        if(uniquechk==arr[j]){
            count++;
        }
      }
     if(count==1){
        unique=arr[i];
        break;
     }
}
cout<<unique<<endl;
  
}
}