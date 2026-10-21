#include<iostream>
#include<string>

using namespace std;

class binary{
    string s;
public:
    void read(void);
    void chk_bin(void);
    void ones(void);

};
void binary :: read(void){
    cout<<"enter a binary number:";
    cin>>s;

}
void binary::chk_bin(void){
    for (size_t i=0;i<s.length();i++){
        if(s[i]!='0'&&s[i]!='1'){
            cout<<"incorrect binary"<<endl;
            exit(0);
        }
    }
}
   
void binary:: ones(void){
    for(size_t i=0;i<s.length();i++){
        if(s[i]=='0'){ 
            s[i]='1';
        }
        else if(s[i]=='1'){
            s[i]='0';
        }
    }
    cout<<s<<endl;

}



int main(){  
 
  binary b;
  b.read();
  b.chk_bin();
  b.ones();
  return 0;
}