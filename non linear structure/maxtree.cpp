#include<queue>
#include<iostream>
using namespace std;
class Solution {
public:
    int maxDepth(TreeNode* root) {
        queue<TreeNode*> q;
        queue<int> level;
        if(root==NULL){
            return 0;
        }
        q.push(root);
        level.push(1);
        int max_depth=0;
        while(!q.empty()){
            TreeNode* temp=q.front();
            q.pop();
            int curr_level=level.front();
            level.pop();

            

            if(temp->left !=NULL){
                q.push(temp->left);
                level.push(curr_level+1);
            }
            if(temp->right !=NULL){
                q.push(temp->right);
                level.push(curr_level+1);
            }
            max_depth=max(max_depth,curr_level);

        }
    }
};