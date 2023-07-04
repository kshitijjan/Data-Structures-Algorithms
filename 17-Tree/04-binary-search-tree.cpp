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

void levelOrderTraversal(node* root){

    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}
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

int main(){

node* root = NULL;
cout<<"Enter the data for creating a BST"<<endl;
takeInput(root);
levelOrderTraversal(root);

    return 0;
}