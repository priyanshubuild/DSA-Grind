// write in cpp create a class employee to enter the datails of atlest 2 employees
#include<bits/stdc++.h>
using namespace std;

class emp{
   public:   
   int slr,ag;
    string nm,dept;

    emp(string name, int salary, int age, string department){
        nm=name;
        slr=salary;
        ag=age;
        dept=department;

    }
};

int main(){

    string nm,dept;
    int slr, ag;
    emp e1("prabhat rai",2,21,"cse");
    emp e2("priaynshu gupta",5000,21,"cse");

    cout<<"employee 1 details:"<<endl;
    cout<<"name:"<<e1.nm<<endl;
    cout<<"salary:"<<e1.slr<<endl;
    cout<<"age:"<<e1.ag<<endl;  

    cout<<"employee 2 details:"<<endl;
    cout<<"name:"<<e2.nm<<endl;
    cout<<"salary:"<<e2.slr<<endl;
    cout<<"age:"<<e2.ag<<endl;      

    
}