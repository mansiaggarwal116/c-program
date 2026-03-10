#include <iostream>
using namespace std;

class Node{
    public:

    int data;
    Node* left;
    Node* right;
    
        Node(int val){
            data=val;
            left = NULL;
            right = NULL;
        }
};

Node* insert(Node* root, int val){
    if(root==NULL){
        return new Node(val);
    }
    if(root->data < val){
        root->right = insert(root->right, val);
    }
    else{
        root->left = insert(root->left, val);
    }
    return root;

}
 void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
 }

 int findMin(Node* temp){
    while(temp->left !=NULL){
        temp = temp->left;
    }
    return temp->data;
 }

 Node* deleteNode(Node* curr_node, int val){
    if(val< curr_node->data){
        curr_node->left = deleteNode(curr_node->left, val);   
    }
    else if(val> curr_node->data){
        curr_node->right = deleteNode(curr_node->right, val);       
    }
    else{
        if(curr_node->left==NULL && curr_node->right==NULL){
          return NULL;                  ///no child case
        }
        if(curr_node->left == NULL){
            return curr_node->right;    ///one child case
        }
        if(curr_node->right == NULL){
            return curr_node->left;     ///one child case
        }
        int mini = findMin(curr_node->right);
        curr_node->data = mini;
        deleteNode(curr_node->right, mini);  ///two child case
    }
    return curr_node;

 }
int main(){
    Node* root =  NULL;
    root= insert(root,60);
    root= insert(root,80);
    root= insert(root,30);        
    root= insert(root,10);
    root= insert(root,75);
    root= insert(root,65);
    root= insert(root,90);
    root= insert(root,85);
    root= insert(root,100);
    cout<<"inorder traversal";
    inorder(root);

    deleteNode(root, 80);
    cout<<"inorder traversal";
    inorder(root);
    return 0;
}