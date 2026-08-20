#include <iostream>
using namespace std;
void fun(){
     int x;
    x++;
    cout<<x<<endl;
}
int main (){
    fun();
    fun();
    fun();
    return 0;
}



// ,static varible  ,it is also known as class member vairaible , it must be definded outside the class , it does not belongs to any object but to whole class
// only one copy is maintain throughout the same process, any object can use same copy of static variable, it is used to keep track of number of objects created for a class, it is also used to keep track of number of function calls made for a function
// it can also be used with class name. 


