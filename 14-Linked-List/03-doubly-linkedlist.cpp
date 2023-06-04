#include<iostream>
using namespace std;

class linkedlist{

    public:
    int data;
    linkedlist* prev;
    linkedlist* next;

    linkedlist(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
    ~linkedlist(){
        if(this->next != NULL){
            this->next = NULL;
            delete next;
        }
        cout<<"Node has been deleted"<<endl;
    }
};

void insertAtHead(linkedlist* &head, int data){
    linkedlist* temp = new linkedlist(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
    }
void insertAtTail(linkedlist* &tail, int data){
    linkedlist* temp = new linkedlist(data);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}
void insertAtPosition(int position, int data, linkedlist* &head, linkedlist* &tail){
    if(position == 1){
        insertAtHead(head, data);
        return;
    }
    linkedlist* temp = head;
    int count = 1;

    while(count<position-1){
        temp = temp->next;
        count++;
    }
    linkedlist* nodeToInsert = new linkedlist(data);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
    
    if(temp->next == NULL){
        insertAtTail(tail, data);
        return;
    }
}
void deleteNode(int position, linkedlist* &head){
    if(position == 1){
        linkedlist* temp = head;
        temp->next = NULL;
        delete temp;
    }
    else{

    
    linkedlist* current = head;
    linkedlist* previous = current;

    int count = 1;

    while(count<position){
        previous = current;
        current = current->next;
        count++;
    }
    previous->next = current->next;
    current->next->prev = previous;

    current->next = NULL;
    delete current;
    }


}

void print(linkedlist* &head){
    linkedlist* printing = head;

    while(printing != NULL){
        cout<<printing->data<<" ";
        printing = printing->next;
    }
    cout<<endl;
}
int len(linkedlist* &head){
    linkedlist* temp = head;
    int length = 0;

    while(temp != NULL){
        length++;
        temp = temp->next;
    } 
return length;
}


int main(){

linkedlist* node1 = new linkedlist(10);
linkedlist* head = node1;
linkedlist* tail = node1;
insertAtHead(head, 12);
insertAtTail(tail, 14);
insertAtPosition(2, 13, head, tail);
insertAtPosition(1, 100, head, tail);
print(head);
deleteNode(3, head);
print(head);
cout<<"head "<<head->data<<endl;
cout<<"tail "<<tail->data<<endl;
cout<<"Length of linkedList is "<<len(head)<<endl;

    return 0;
}