#include <iostream>
using namespace std;

class Node{
    public:
       int data;
       Node* left;
       Node* right;

       Node(int val){
        this->data=val;
         left = NULL;
         right = NULL;
       }
      
};

class BinarySearchTree{
    public:
         Node* root;
         Node* temp;
         BinarySearchTree(){
            root = NULL;
         }
    void insert(int val){
        Node* newNode = new Node(val);
        if(root==NULL){
            root = new Node(val);
            return;
        }
        temp = root;
        while(true){
            if(temp->data > val){
                if(temp->left==NULL){
                    temp->left= newNode;
                    return;
                }
                temp = temp->left;
            }
            else{
                if(temp->right==NULL){
                    temp->right= newNode;
                    return;
                }
                temp = temp->right;
            }
        }
}
    bool search(int key){
        if(root==NULL){
            return false;
        }
        if(root->data==key){
            return true;
        }
        temp =root;
        while(temp!=NULL){
            if(temp->data==key){
                return true;
            }
            if(temp->data > key){
                temp = temp->left;
            }
            else{
                temp = temp->right;
            }
        }
        return false;

    }

    void inorder(Node* curr_node){
         if(curr_node==NULL){
            return;
         }
         inorder(curr_node->left);
         cout<<curr_node->data<<" ";
         inorder(curr_node->right);

     }
    void preorder(Node* curr_node){
         if(curr_node==NULL){
            return;
         }
         cout<<curr_node->data<<" ";
         preorder(curr_node->left);
         preorder(curr_node->right);

     }

     void postorder(Node* curr_node){
        if(curr_node==NULL){
            return;
        }
        postorder(curr_node->left);
        postorder(curr_node->right);
        cout<<curr_node->data<<" ";

     }
};

     int main(){
        BinarySearchTree bst;
        bst.insert(5);
        bst.insert(3);
        bst.insert(7);
        bst.insert(2);
        bst.insert(4);
        
        cout<<"Inorder Traversal: ";
        bst.inorder(bst.root);
        cout<<"\nPreorder Traversal: ";
        bst.preorder(bst.root);

        cout<<"\nPostorder Traversal: ";
        bst.postorder(bst.root);
        cout<<"\nSearch for 4: "<<bst.search(4);
        cout<<"\nSearch for 6: "<<bst.search(6);
        return 0;

     }

