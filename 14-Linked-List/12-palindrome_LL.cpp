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
Node* getMid(Node* &head){

    //One Fast reaches at end, slow will reach length/2
    Node* slow = head;
    Node* fast = head->next;

    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}
Node* reverse(Node* &temp){

    Node* prev = NULL;
    Node* curr = temp;
    Node* forward = NULL;

    while(curr!=NULL){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

bool checkPalindrome(Node* &head){

    //Only one node is present and it is always a palindrome
    if(head->next == NULL){
        return true;
    }
    //Finding Middle
    Node* middle = getMid(head);
    //Reverse List after middle
    Node* temp = middle->next;
    middle->next = reverse(temp);

    //Comparing both halves
    Node* head1 = head;
    Node* head2 = middle->next;

    //comparing data of both
    while(head2 != NULL){
        if(head1->data != head2->data){
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    
    return true;

}

int main(){
Node* node1 = new Node(1);
Node* head = node1;
Node* tail = node1;
insertAtHead(head, 2);
insertAtHead(head, 4);
insertAtHead(head, 3);
insertAtHead(head, 2);
insertAtHead(head, 1);

print(head);
bool ans = checkPalindrome(head);
if(ans){
    cout<<"Yes Palindrome"<<endl;
}
else{
    cout<<"Not Palindrome"<<endl;
}
return 0;
}