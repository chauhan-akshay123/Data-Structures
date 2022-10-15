/*
--- Leetcode LINK --- https://leetcode.com/problems/binary-tree-right-side-view/
*/

    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        queue<TreeNode*> q;
        q.push(root);
        if(root==NULL){
            return ans;
        }
        while(1){
            int size = q.size();
            if(q.size()==0){
                return ans;
            }
            int data = NULL;
            while(size>0){
                TreeNode* temp = q.front();
                q.pop();
                data = temp->val;
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
                size--;
            }
            ans.push_back(data);
        }
        return ans;
    }
