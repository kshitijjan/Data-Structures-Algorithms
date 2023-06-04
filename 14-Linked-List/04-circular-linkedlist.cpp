#include<iostream>
using namespace std;

class linkedList{

public:
int data;
linkedList* next;

linkedList(int data){
    this->data = data;
    this->next = NULL;
}
};

void insertAtHead(linkedList* &head, int data){
    linkedList* temp = new linkedList(data);
    temp->next = head;
    head = temp;
}
void insertAtTail(linkedList* &tail, int data){
    linkedList* temp = new linkedList(data);
    tail->next = temp;
    tail = temp;
}
void insertAtPosition(int position, linkedList* &tail, linkedList* &head, int data){

    if(position == 1){
        insertAtHead(head, data);
        return;
    }
    linkedList* temp = head;
    int count = 1;
    while(count < position-1){
        temp = temp->next;
        count++;
    }
    linkedList* nodeToInsert = new linkedList(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}
void print(linkedList* &head){
    linkedList* printing = head;

    while(printing != NULL){
        cout<<printing->data<<" ";
        printing = printing->next;
    }
    cout<<endl;
}

int main(){

linkedList* node1 = new linkedList(10);
linkedList* head = node1;
linkedList* tail = node1;
insertAtHead(head,9);
insertAtTail(tail, 12);
insertAtPosition(3, tail, head, 11);
print(head);

    return 0;
}