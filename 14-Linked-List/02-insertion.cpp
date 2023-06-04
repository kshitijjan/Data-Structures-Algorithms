#include<iostream>
using namespace std;

class Node{
    
public:

int data;
Node* address;

Node(int data){
    this-> data = data;
    this->address = NULL;
}
};

void insertNodeAtHead(Node* &head, int d){
    Node * temp = new Node(d);
    temp -> address = head;
    head = temp;
}

void print(Node * &head){
    Node *temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->address;
    }
cout<<endl;
}

int main(){

Node* node1 = new Node(10);

// cout<<node1->data<<endl;
// cout<<node1->address<<endl;

Node*head = node1;

insertNodeAtHead(head, 12);
insertNodeAtHead(head, 15);
print(head);

    return 0;
}