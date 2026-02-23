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
     void inorder(){}
     bool search(){}
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
    
   // cout<<"\n Inorder";
    t.inorder();




}


