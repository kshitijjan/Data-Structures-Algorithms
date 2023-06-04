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
bool checkPalindrome(int *arr, int size){

    int start = 0;
    int end = size-1;
    while(start<=end){
        if(arr[start] != arr[end]){
            return 0;
        }
        start++;
        end--;
    }
    return 1;

}
//Inserting entire LinkedList in Array
bool insertingInArray(Node* &head){

    Node* temp = head;
    int size = 0;
    while(temp!=NULL){
        size++;
        temp = temp->next;
    }
    int *arr = new int(size);
    temp = head;

    for(int i=0; i<size; i++){
        arr[i] = temp->data;
        temp = temp->next;
    }
    return checkPalindrome(arr, size);
    
}



int main(){
Node* node1 = new Node(1);
Node* head = node1;
Node* tail = node1;
insertAtHead(head, 2);
insertAtHead(head, 3);
insertAtHead(head, 3);
insertAtHead(head, 2);
insertAtHead(head, 1);

print(head);
bool ans = insertingInArray(head);

if(ans){
        cout<<"Yes Plaindrome"<<endl;
    }
    else{
        cout<<"Not Palindrome"<<endl;
    }

return 0;
}