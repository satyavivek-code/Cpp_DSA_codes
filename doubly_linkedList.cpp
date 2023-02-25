#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* previous;
    Node* next;

    Node(int d){
        this->data = d;
        this->previous =NULL;
        this->next =NULL;
    }
};
void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head -> previous = temp;
    head = temp;
}

void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    temp -> previous = tail;
    tail = temp;
}

void insertAtPosition(Node* &head, Node* &tail, int position, int d){
    
    if (position ==1){
        insertAtHead(head,d);
        return;
    }
    Node* temp = head;
    int count = 1;

    while (count < position-1){
        temp = temp->next;
        count++;
    }
    // insert at last
    if (temp -> next == NULL){
        insertAtTail(tail,d);
        return;
    }
    
    Node* nodeAtPosition = new Node(d);

    nodeAtPosition->next = temp->next;
    temp->next->previous = nodeAtPosition;
    temp->next = nodeAtPosition;
    nodeAtPosition->previous = temp;
    
}


void print(Node* head){
    Node* temp = head;

    while (temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }cout << endl;
}

int getLength(Node* head){
    Node* temp = head;
    int len = 0;

    while (temp != NULL){
        temp = temp->next;
        len++;
    }
    return len;
}
int main()
{
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    print(head);
    cout << " length of the node " << getLength(head) << endl;

    insertAtHead(head, 20);
    print(head);
    cout << " length of the node " << getLength(head) << endl;
    insertAtTail(tail, 30);
    print(head);
    cout << " length of the node " << getLength(head) << endl;

    
    insertAtPosition(head, tail, 4, 40);
    print(head);
    cout << " length of the node " << getLength(head) << endl;
    insertAtPosition(head, tail, 1, 40);
    print(head);
    cout << " length of the node " << getLength(head) << endl;

    
    return 0;
}