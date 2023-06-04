#include<iostream>
using namespace std;

class linkedList{

    public:
    int data;
    linkedList* next;

    linkedList(int data){
        this->data = data;
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
void print(linkedList* &head){
    linkedList* printing = head;

    while(printing->next != NULL){
        cout<<printing->data<<" ";
        printing = printing->next;
    }
    cout<<endl;
}

int main(){

linkedList* node1 = new linkedList(10);
linkedList* head = node1;
linkedList* tail = node1;

insertAtHead(head, 0);
insertAtTail(tail, 20);
print(head);
cout<<tail->data<<endl;

    return 0;

}