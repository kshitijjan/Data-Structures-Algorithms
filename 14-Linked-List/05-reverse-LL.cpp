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
void reverse(linkedList* &head){
linkedList* prev = NULL;
linkedList* curr = head;
linkedList* forward = NULL;

while(curr!=NULL){

    forward = curr->next;
    curr->next = prev;
    prev = curr;
    curr = forward;
    }

}
void insert(linkedList* &head, int data){
    linkedList* temp = new linkedList(data);
    temp->next = head;
    head = temp;
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
int nodeToCreate;
cout<<"Enter the nodes you want to insert"<<endl;
cin>>nodeToCreate;
int data;
for(int i=0; i<nodeToCreate; i++){
    cin>>data;
    insert(head, data);
}
print(head);

    return 0;
}