#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* buildTree(Node* root){

    //Building a tree using recursion
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout<<"Enter the data"<<endl;
    int data;
    cin>>data;
    
    root = new Node(data);

    if(data == -1){
        return NULL;
    }

    cout<<"Enter data for inserting in left of "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter data for inserting in right of "<<data<<endl;
    root->right = buildTree(root->right);

    return root;
}

void levelOrderTraversal(Node* root){

    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp == NULL){
            //Last level has been traversed completely, so enter in next line for new level nodes output
            cout<<endl; 
            if(!q.empty()){
                //Queue still has some child node
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
    cout<<endl;
}

void inorder(Node* root){

    //Base Case
    if(root == NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(Node* root){
    
    //Base Case
    if(root == NULL){
        return;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root){

    //Base Case
    if(root == NULL){
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main(){

    Node* root = NULL;

    root = buildTree(root);

    cout<<"Level Order Traversal is"<<endl;
    levelOrderTraversal(root);

    cout<<"Inorder Traversal is "<<endl;
    inorder(root);
    cout<<endl<<"Preorder Traversal is"<<endl;
    preorder(root);
    cout<<endl<<"Postorder traversal is"<<endl;
    postorder(root);
    cout<<endl;
    return 0;
}