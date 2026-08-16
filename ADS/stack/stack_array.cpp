#include<bits/stdc++.h>
using namespace std;

class Arraystack{
    int* stack;
    int size;
    int top;
public:
    Arraystack(int n){
        size=n;
        stack=new int [size];
        top=-1;
    }
    void push(int x){
        if(top==size-1){
            cout<<"Stack overflow"<<endl;
            return;
        }
        stack[++top]=x;
    }
    bool isEmpty(){
        return top==-1;
    }
    int pop(){
        if(isEmpty()){
            cout<<"stack is empty";
            return -1;
        }
        return stack[top--];
    }
    int peek(){
        if(isEmpty()){
            cout<<"stack is empty";
            return -1;
        }
        return stack[top];
    }
    void display(){
        if(isEmpty()){
            cout<<"stack is empty";
            return;
        }
        for(int i=top;i>=0;i--){
            cout<<stack[i]<<" ";
        }
    }
};
int main(){
    int n,x;
    cout<<"Enter the size of Stack:";
    cin>>n;
    int choice=0;
    Arraystack s(n);
    do{
        cout<<"1. Push 2. Pop 3. Peek 4. Display 5. Exit"<<endl;
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Enter the element to be pushed:"<<endl;
                cin>>x;
                s.push(x);
                break;
            case 2:
                x=s.pop();
                if(x!=-1)
                    cout<<"Popped element is:"<<x<<endl;
                break;
            case 3:
                x=s.peek();
                if(x!=-1)
                    cout<<"Top element is:"<<x<<endl;
                break;
            case 4:
                s.display();
                cout<<endl;
                break;
            case 5:
                exit(0);
        }
    }while(1);
}