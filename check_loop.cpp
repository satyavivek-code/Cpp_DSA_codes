#include<iostream>
#include<map>

using namespace std;
class Node{
    public:
    int data;
    Node* next;

    // parameterised constructor
    Node(int data){
        this -> data  = data;
        this -> next = NULL;
    }

    // destructor
    ~Node(){
        int value = this->data;
        if (this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }

};

    // Insert Node at beginning 

    void insertAtHead(Node* &head, int d){ // [&head] taken because it dosent take any extra space
        
        Node* temp = new Node(d);
        temp->next = head;
        head = temp;
    }

    // Insert Node at end

    void insertAtTail(Node* &tail, int d){
        Node* temp = new Node(d);
        tail -> next = temp;
        tail = tail->next;

    }
    // Insert Node at particular position 

    void insertAtPosition(Node* &tail, Node* &head, int position, int d){

        // insert at start

        if (position ==1){
            insertAtHead(head,d);
            return;
        }
        Node* temp = head;
        int count = 1;
        
        // traversing the list

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
        temp->next = nodeAtPosition;
        
    }


// Deletion of node

void nodeDeletion(Node* &head, int position){
    
    if (position == 1){
        Node* temp = head;
        head = head-> next;
        temp->next = NULL;

        delete temp;
    }
    else {
        Node* prev =NULL;
        Node* current = head;

        int count = 1;
        while (count <= position){
            prev = current;
            current = current-> next;
            count++;
        }
        prev->next = current->next;
        current->next = NULL;

        delete current;

        
    }
}

bool detectLoop(Node* head){

    if (head == NULL) return false;

    map<Node*, bool> visited;
    Node* temp = head;

    while (temp != NULL){

        if (visited[temp] == true) return true ;

        visited[temp] = true;
        temp = temp->next;
    }
    return false ;
}


void print(Node* &list){
    Node* temp = list;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }cout<< endl;
}
int main()
{
    Node* node1 = new Node(50);

    // cout << node1->data << endl;
    // cout << node1->next << endl;

    Node* head = node1;
    Node* tail = node1;
    // print(head);

    insertAtHead(head, 25);
    insertAtHead(head, 12);
    print(head);

    insertAtTail(tail,30);
    print(head);

    insertAtPosition(tail, head, 1, 1);
    print(head);
    insertAtPosition(tail, head, 6, 1);
    print(head);

    // cout << "head " << head -> data << endl;
    // cout << "tail " << tail -> data << endl;

    tail->next = head ->next;
    // print(head);
    if (detectLoop(head)){
        cout << "Cycle is present in the list " ;
    }
    else{
        cout << "Cycle is not present in the list ";
    }cout << endl;

    // nodeDeletion(head , 2);
    // print(head);

    return 0;
}