#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
    }
};

void insertAtHead(Node* &head, int data){
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}
void print(Node* &head){
    Node* printing = head;
    int count = 1;

    while(printing!=NULL){
        cout<<printing->data<<" ";
        printing = printing->next;
    }
    cout<<endl;
}
void removeDuplicateFromSortedLinkedList(Node* &head){

    if(head == NULL){
        return;
    }
    Node* curr = head;

    while(curr != NULL){

        if((curr->next != NULL) && (curr->data == curr->next->data)){
            Node* next_next = curr->next->next;
            Node* nodeToDelete = curr->next;
            delete(nodeToDelete);
            curr->next = next_next;
        }
        else{
            curr = curr->next;
        }
    }
}

int main(){

Node* node1 = new Node(10);
Node* head = node1;
Node* tail = node1;
insertAtHead(head, 20);
insertAtHead(head, 20);
insertAtHead(head, 40);
insertAtHead(head, 40);
insertAtHead(head, 50);
insertAtHead(head, 60);
insertAtHead(head, 60);

print(head);

removeDuplicateFromSortedLinkedList(head);
print(head);

    return 0;
}