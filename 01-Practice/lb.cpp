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

node* buildTree(node* root){

    int data;
    cout<<"Enter the data: ";
    cin>>data;

    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout<<"Enter the data for inserting in left of "<<data<<": ";
    root->left = buildTree(root->left);
    cout<<"Enter the data for inserting in right of "<<data<<": ";
    root->right = buildTree(root->right);

    return root;
}

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

void preOrderTraversal(node* root){

    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void inOrderTraversal(node* root){
    if(root == NULL){
        return;
    }
    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);
}
void postOrderTraversal(node* root){
    if(root == NULL){
        return;
    }
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ";
}

int main(){
// 1 3 7 -1 -1 11 -1 -1 5 17 -1 - 1 -1
node* root = NULL;
root = buildTree(root);
levelOrderTraversal(root);
preOrderTraversal(root);
cout<<endl;
inOrderTraversal(root);
cout<<endl;
postOrderTraversal(root);
cout<<endl;
cout<<endl;

    return 0;
}