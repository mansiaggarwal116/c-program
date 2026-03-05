#include<iostream>
#include<queue>
using namespace std;
class Solution {
public:
    
    public:
       int data;
       TreeNode* left;
       TreeNode* right;

       TreeNode(int val){
        this->data=val;
         left = NULL;
         right = NULL;
       }
    int minDepth(TreeNode* root) {
        queue<TreeNode*> q;
        queue<int> level;
        if(root==NULL){
            return 0;
        }
        q.push(root);
        level.push(1);
        while(!q.empty()){
            TreeNode* temp=q.front();
            q.pop();
            int curr_level=level.front();
            level.pop();

            if(temp->left==NULL && temp->right==NULL){
                return curr_level;
            }
            if(temp->left !=NULL){
                q.push(temp->left);
                level.push(curr_level+1);
            }
            if(temp->right !=NULL){
                q.push(temp->right);
                level.push(curr_level+1);
            }
        }

    
}
};