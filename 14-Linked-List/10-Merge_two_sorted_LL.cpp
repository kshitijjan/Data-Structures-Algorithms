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

Node* solve(Node* &first, Node* &second){

    //if only one element is present in LinkedList
    if(first->next == NULL){
        first->next = second;
        return first;
    }
    //Creating objects
    //Curr1 will point to first linkedlist's first node
    Node* curr1 = first;
    //next1 will point to first linkedlist's next to curr1
    Node* next1 = curr1->next;
    //curr2 will point to second linkedlist's first node
    Node* curr2 = second;
    //next2 will point to second linkedlist's next to curr2
    Node* next2 = curr2->next;

    //Traversing next1 and next 2 untill both reach to NULL
    while(next1 != NULL && next2 != NULL){

        //Checking if curr2->data can fit in between if curr1->data and next1->data
        if(curr1->data <= curr2->data && curr2->data <= next1->data){

            curr1->next = curr2;
            next2 = curr2->next;
            curr2->next = next1;
            
            //Updating the pointers
            curr1 = curr2;
            curr2 = next2;

        }
        else{
            curr1 = next1;
            next1 = next1->next;

            if(next1 == NULL){
                curr1->next = curr2;
                return first;
            }
        }
    }
return first;
}

Node* mergeTwoSortedLL(Node* &first, Node* &second){

    //If first is empty then print Second
    if(first == NULL){
        return second;
    }
    //If second is empty then print First
    if(second == NULL){
        return first;
    }

    if(first->data <= second->data){
        solve(first, second);
    }
    else{
        solve(second, first);
    }
    return NULL;
}



int main(){

Node* node1 = new Node(5);
Node* node2 = new Node(7);
Node* first = node1;
Node* second = node2;
insertAtHead(first, 3);
insertAtHead(first, 1);
insertAtHead(second, 6);
insertAtHead(second, 4);
insertAtHead(second, 2);

print(first);
print(second);
mergeTwoSortedLL(first, second);
print(first);


return 0;
}