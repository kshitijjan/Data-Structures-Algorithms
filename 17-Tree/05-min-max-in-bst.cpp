#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};


node* insertIntoBST(node* root, int data){

    if(root == NULL){
        //The BST's root is empty initially, so insert root node
        root = new node(data);
        return root;
    }
    if(data > root->data){
        //Insert into the left part of each node
        root->right = insertIntoBST(root->right, data);
    }
    else{
        //Insert into the right part of each node
        root->left = insertIntoBST(root->left, data);
    }
    return root;
}

void takeInput(node* &root){

    int data;
    cin>>data;

    while(data != -1){
        root = insertIntoBST(root, data);
        cin>>data;
    }
}

int minValueInBST(node* &root){

    node* temp = root;

    if(temp == NULL){
        return -1;
    }
    while(temp->left != NULL){
        temp = temp->left;
    }
    return temp->data;
}
int maxValueInBST(node* &root){

    node* temp = root;

    if(temp == NULL){
        return -1;
    }
    while(temp->right != NULL){
        temp = temp->right;
    }
    return temp->data;
}

int main(){

node* root = NULL;
cout<<"Enter the data for creating a BST"<<endl;
takeInput(root);

cout<<"Min value in BST: " << minValueInBST(root)<<endl;
cout<<"Max value in BST: " << maxValueInBST(root)<<endl;

    return 0;
}