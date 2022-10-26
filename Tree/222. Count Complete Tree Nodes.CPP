/*
---Leetcode LINK--- https://leetcode.com/problems/count-complete-tree-nodes/
*/

   int countNodes(TreeNode* root) {
        int count = 0;
        queue<TreeNode*> q;
        q.push(root);
        if(root==NULL){
           return count; 
        }
        while(!q.empty()){
            int size = q.size();
            while(size>0){
                TreeNode* temp = q.front();
                q.pop();
                count++;
                if(temp->left){
                        q.push(temp->left);
                }
                if(temp->right){
                   q.push(temp->right); 
                }
                size--;
            }
        }
        return count;
    }
