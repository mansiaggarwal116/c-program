#include <iostream>
#include <queue>
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

class Tree{
    public:
     Node* root;

     Tree(){
        root = NULL;
     }
    
     void insert(int val){
        Node* newNode = new Node(val);
        if(root==NULL){
            root = new Node(val);
            return;
        }
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            Node* temp =q.front();
            q.pop();
            if(temp->left==NULL){
                temp->left= newNode;
                return;
            }
            if (temp->right==NULL){
                temp->right= newNode;
                return;
            }
             q.push(temp->left);
             q.push(temp->right);
            
        }


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

     bool search(int key){
        
     }
     void levelOrder(){
        if(root==NULL){
          return;
        }
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            Node* temp=q.front();
            q.pop();
            cout<<temp->data<<" ";

            if(temp->left !=NULL)
                q.push(temp->left);

            if(temp->right !=NULL)
                q.push(temp->right);
            
        }
     }
};

int main(){
    Tree t;
    
    t.insert(10);
    t.insert(20);
    t.insert(30);
    t.insert(40);
    t.insert(50);
    
    cout<< "Level Order  ";
    t.levelOrder();
    
    cout<<"\n Inorder  ";
    t.inorder(t.root);

   cout<<"\n Preorder  ";
    t.preorder(t.root);

   cout<<"\n Postorder  ";
    t.postorder(t.root);



}


