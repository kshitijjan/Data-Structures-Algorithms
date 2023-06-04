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
void insertAtTail(Node* &tail, Node* curr){
    tail->next = curr;
    tail = curr;
}

void sort_0_1_2(Node* &head){
    if(head == NULL){
        return;
    }
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;
    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;

    Node* curr = head;

    while(curr != NULL){
        if(curr->data == 0){
            insertAtTail(zeroTail, curr);
        }
        else if(curr->data == 1){
            insertAtTail(oneTail, curr);
        }
        else if(curr->data == 2){
            insertAtTail(twoTail, curr);
        }
        curr = curr->next;
    }
    if(oneHead->next != NULL){
        zeroTail->next = oneHead->next;
    }
    else{
        zeroTail->next = twoHead->next;
    }
    oneTail->next = twoHead->next;
    twoTail->next = NULL;

    head = zeroHead->next;

    delete zeroHead;
    delete oneHead;
    delete twoHead;
}

int main(){

Node* node1 = new Node(1);
Node* head = node1;
Node* tail = node1;
insertAtHead(head, 0);
insertAtHead(head, 2);
insertAtHead(head, 1);
insertAtHead(head, 0);
insertAtHead(head, 2);

print(head);
sort_0_1_2(head);
print(head);

return 0;
}