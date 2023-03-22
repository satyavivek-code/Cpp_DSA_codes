#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    Node (int n){
        this -> data = n;
        this -> next = NULL;
    }
};

class Stack {
    Node* top;

    public:
        Stack(){
            top = NULL;
        }    
    
    void push (int data){

        Node* temp = new Node(data);

        if (!temp){
            cout << "Stack overflow" << endl;
            exit(1);
        }
        temp -> data =  data ;
        temp -> next = top;

        top = temp;

    }
    bool empty (){
        if (top == NULL){
            return false;
        }
        else {
            return true;
        }
    }
    int peek(){
        if(!empty()){
            return top->data;
        }
        else{
            exit(1);
        }
    }
    void pop(){
        Node* temp;
        if (top == NULL){
            cout << "Stack is underflow " << endl;
            exit(1);
        }
        else {
            temp = top;
            top = top-> next;

            free(temp);
        }
    }
    void display(){
        Node* temp;

        if (top == NULL){
            cout << " Stack is underflow " << endl;
            exit(1);
        }
        else {
            temp = top;
            while (temp != NULL){
                cout << temp -> data;
                temp = temp -> next;
                
                if (temp != NULL){
                    cout << " -> " ;
                }
            }
        }
    }
};
int main()
{
    Stack s;

    s.push(5);
    s.push(10);
    s.push(20);
    s.push(25);
    s.push(30);

    s.display();
    
    return 0;

}