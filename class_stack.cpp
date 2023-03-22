#include<iostream>
using namespace std;
class Stack {

    // properties 
    public:
        int *arr;
        int size;
        int top;

    // constructor 
    // behavior  
    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout << "Stack overflow " << endl;
        }
    }

    void pop(){
        if (top >= 0){
            top--;
        }
        else {
            cout << "stack underflow" << endl;
        }

    }
    int peek(){
        if (top >= 0 && top <= size){
            return arr[top];
        }
        else {
            cout << "Stack is empty " << endl;
        }
    }

    bool empty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
};
int main()
{
    Stack st(5);

    st.push(20);
    st.push(23);
    st.push(45);
    st.push(20);
    st.push(23);
    st.push(45);

    cout <<"The top element of stack is " <<  st.peek() << endl;
    
    st.pop();

    cout <<"The top element of stack is " <<  st.peek() << endl;
    st.pop();

    cout <<"The top element of stack is " <<  st.peek() << endl;
    // st.pop();

    // cout <<"The top element of stack is " <<  st.peek() << endl;

    if(st.empty()){
        cout << "Stack is empty " << endl;
    }
    else {
        cout << " stack is not empty  " << endl ;
    }
    return 0;

}