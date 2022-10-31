/*
---Leetcode LINK--- https://leetcode.com/problems/kth-smallest-element-in-a-bst/
*/

// Approach -1
    vector<int> data;
    
        void inorder(TreeNode* root,vector<int> &data){
        if(root!=NULL){
            inorder(root->left,data);
            data.push_back(root->val);
            inorder(root->right,data);
        }
    }
    
    int kthSmallest(TreeNode* root, int k) {
        inorder(root,data);
        return data[k-1];
    }
