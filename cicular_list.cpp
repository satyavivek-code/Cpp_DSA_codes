#include<iostream>
using namespace std;

class Node{
    public : 
    int data;

    Node* next;

    Node(int d){
        this-> data = d;
        this->next = NULL;
    }
    ~Node (){
        int value = this->data;
        if (this->next != NULL){
            delete next;
            next = NULL;
        }cout << "Memory is free for node data" << value << endl ;
    }
};

void insertNode(Node* &tail, int element, int d){
    // assume that the element is present in list

    // empty list
    if (tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;

    }
    else{
        // non empty list

        Node* current = tail;
        while (current->data != element){
            current = current->next;
        }

        Node* temp = new Node(d);
        temp->next = current->next;
        current -> next = temp;
    }
}

void print(Node* tail){
    Node* temp = tail;

    if (tail == NULL){
        cout << " list is empty " << endl;
        return;
    }

    do {
        cout << tail -> data << " ";
        tail = tail -> next;
    }while(tail != temp);
    cout << endl;
}


void deleteNode(Node* &tail, int value) {
    // empty list

    if (tail == NULL){
        cout <<" list is empty" << endl;
        return;
    }
    else{
        // non empty list

        Node* prev = tail;
        Node* cur = prev->next;

        while(cur -> data != value){
            prev = cur;
            cur = cur->next;
        }
        prev->next = cur->next;

        if (cur == prev){
            tail = NULL;
        }
        else if (tail == cur){
            tail = prev;
        }
        cur->next = NULL;
        delete cur;
    }
}
int main()
{
    Node* tail = NULL;

    insertNode(tail,5,3);
    print(tail);
    insertNode(tail,3,5);
    print(tail);
    insertNode(tail,5,7);
    print(tail);
    insertNode(tail,7,9);
    print(tail);
    insertNode(tail,5,6);
    print(tail);
    insertNode(tail,9,10);
    print(tail);
    insertNode(tail,3,4);
    print(tail);
    insertNode(tail,7,8);
    print(tail);

    deleteNode(tail, 3);
    print(tail);
    
    return 0;
}