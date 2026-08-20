#include<iostream>
using namespace std;

class Complex{
   int real;
    int complex;
    public:
   Complex(int a, int b){
      real=a;
      complex=b;
   }
   void show(){
      cout << real << " " << " + " << complex << "i"<<endl ;
   }
};
int main(){
   Complex c1(1,2);
   c1.show();
}
