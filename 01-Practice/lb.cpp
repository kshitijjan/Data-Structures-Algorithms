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
    cout<<"Enter the data ";
    cin>>data;

    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout<<"Enter the data for inserting in left of "<<data<<": ";
    root->left = buildTree(root->left);
    cout<<"Enter the data fir inserting in right of "<<data<<": ";
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

void buildLevelOrderTraversal(node* &root){

    queue<node*> q;
    int data;
    cout<<"Enter the data "<<" ";
    cin>>data;
    root = new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout<<"Enter the data for inserting in left of "<<temp->data<<" ";
        int leftData;
        cin>>leftData;

        if(leftData != -1){
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        cout<<"Enter the data for inserting in right of "<<temp->data<<" ";
        int rightData;
        cin>>rightData;

        if(rightData != -1){
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
}

int main(){

    node* root = NULL;

    // root = buildTree(root);
    buildLevelOrderTraversal(root);
    levelOrderTraversal(root);

    return 0;
}