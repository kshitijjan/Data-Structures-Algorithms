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
void insert(Node* &head, int data){
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}
void print(Node* &head){
    Node* printing = head;

    while(printing != NULL){
        cout<<printing->data<<" ";
        printing = printing->next;
    }
    cout<<endl;
}
Node* findMid(Node* &head){
    Node* slow = head;
    Node* fast = head->next;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;

}
Node* merge(Node* &left, Node* &right){

    if(left == NULL){
        return right;
    }
    if(right == NULL){
        return left;
    }
    Node* ans = new Node(-1);
    Node* temp = ans;

    while(left != NULL && right != NULL){
        if(left->data < right->data){
            temp->next = left;
            temp = left;
            left = left->next;
        }
        else{
            temp->next = right;
            temp = right;
            right = right->next;
        }
    }
    while(left!=NULL){
        temp->next = left;
        temp = left;
        left = left->next;
    }
    while(right!=NULL){
        temp->next = right;
        temp = right;
        right = right->next;
    }
    ans = ans->next;
    return ans;
}
Node* mergeSort(Node* &head){
    
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* mid = findMid(head);
    Node* left = head;
    Node* right = mid->next;
    mid->next = NULL;

    left = mergeSort(left);
    right = mergeSort(right);

    Node* result = merge(left, right);
    return result;
}

int main(){

int data;
cin>>data;
Node* node1 = new Node(data);
Node* head = node1;

int noOfNodes;
cin>>noOfNodes;
for(int i=0; i<noOfNodes; i++){
    cin>>data;
    insert(head, data);
}
print(head);
mergeSort(head);
print(head);


    return 0;
}