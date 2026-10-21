#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=nullptr;

    }

};
class Stack{
    public:
    Node* head;
    Stack(){
        head=nullptr;
    }

    bool isempty(){
        return (head==nullptr);
    }

    void push(int x){
        Node* newnode= new Node(x);
        newnode->next=head;
        head=newnode;
    }
    void pop(){
        if(isempty()){
            cout<<"invalid operation";
            return ;
        }
        Node* temp = head;
        head=head->next;
        delete temp;
    }
    int peek(){
        if(isempty()){
            cout<<"invalid ops";
            return -1;
        }
        return head->data;
    }

  void display(){
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<"->";
         temp=temp->next;
    }
    cout<<endl;
  }


};

int main(){
   Stack s;
   s.pop();
   s.push(92);
   s.push(94);
   s.push(95);
   s.push(97);
   s.peek();
   s.display();
   s.pop();
   s.peek();
   s.display();

}