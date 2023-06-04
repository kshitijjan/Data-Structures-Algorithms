#include<iostream>
#include<map>
using namespace std;

class linkedList{

    public:
    int data;
    linkedList* next;

    linkedList(int data){
        this->data = data;
    }
    
};
void insert(linkedList* &head, int data){
    linkedList* temp = new linkedList(data);
    temp->next = head;
    head = temp;
}
void print(linkedList* &head){
    linkedList* printing = head;
    while(printing!= NULL){
        cout<<printing->data<<" ";
        printing = printing->next;
    }
    cout<<endl;
}
void sort_0_1_2(linkedList* &head){

    if(head == NULL){
        return;
    }
    linkedList* temp = head;
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;

    //Counting the number of 0, 1 and 2
    while(temp!=NULL){
        if(temp->data == 0){
            zeroCount++;
        }
        else if(temp->data == 1){
            oneCount++;
        }
        else if(temp->data == 2){
            twoCount++;
        }
        temp = temp->next;
    }
    temp = head;
    
    //Arranging 0,1 and 2 in sorted order
    while(temp!=NULL){
        if(zeroCount != 0){
            temp->data = 0;
            zeroCount--;
        }
        else if(oneCount != 0){
            temp->data = 1;
            oneCount--;
        }
        else if(twoCount != 0){
            temp->data = 2;
            twoCount--;
        }
        temp = temp->next;
    }
}
int main(){

linkedList* node1 = new linkedList(1);
linkedList* head = node1;
linkedList* tail = node1;
insert(head, 0);
insert(head, 2);
insert(head, 1);
insert(head, 0);
insert(head, 2);

print(head);
sort_0_1_2(head);
print(head);

return 0;
}