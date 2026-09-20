#include <iostream>
using namespace std;

class Student
{
private:
     long  rollNo;
    string name;
    float marks;

public:
    void input()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);
        

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display()
    {
        cout << "\n--- Student Record ---" << endl;
        cout << "Roll Number : " << rollNo << endl;
        cout << "Name : " << name << endl;
        cout << "Marks : " << marks << endl;
    }
};

int main()
{
    Student s;    
    s.input();      
    s.display();    

    return 0;
}