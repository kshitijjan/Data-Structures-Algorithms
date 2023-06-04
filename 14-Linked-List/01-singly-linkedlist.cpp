#include<iostream>
using namespace std;

class linkedList{

public:
int data;
linkedList* next;

linkedList(int data){
    this->data = data;
}
~linkedList(){
    if(this->next != NULL){
        this->next = NULL;
        delete next;
    }
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
void insertAtPosition(linkedList* &tail, linkedList* &head, int position, int data){
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

    if(nodeToInsert->next == NULL){
        insertAtTail(tail, data);
        return ;
    }
}
void deleteNodeAt(int position, linkedList* &head){
    if(position == 1){
        linkedList* temp = head;
        temp->next = NULL;
        delete temp;
    }
    else{
    linkedList* current = head;
    linkedList* prev = current;
    int count = 1;

    while(count < position){
        prev = current;
        current = current->next;
        count++;
    }
    prev->next = current->next;
    current->next = NULL;
    delete current;
    }

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
insertAtTail(tail, 12);
insertAtTail(tail, 14);
insertAtPosition(tail,head, 2, 11);
insertAtPosition(tail, head, 5, 20);
insertAtPosition(tail, head, 1, 9);
deleteNodeAt(3, head);
print(head);
cout<<"head "<<head->data<<endl;
cout<<"tail "<<tail->data<<endl;

    return 0;
}