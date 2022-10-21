/*
STATEMENT -- Given the root of a binary tree and an integer targetSum, return all root-to-leaf paths where the sum of the node values in the path equals targetSum. Each path should be returned as a list of the node values, not node references.
A root-to-leaf path is a path starting from the root and ending at any leaf node. A leaf is a node with no children.

---Leetcode LINK--- https://leetcode.com/problems/path-sum-ii/
*/

 vector<vector<int>> ans;
    vector<int> path;
    
    void util(TreeNode* root,int targetSum,int sum){
        if(root==NULL){
          return; 
        }
        path.push_back(root->val);
        sum = sum+root->val;
        
        if(sum==targetSum && root->left==NULL && root->right==NULL){
           ans.push_back(path); 
        }
        if(root->left){
           util(root->left,targetSum,sum); 
        }
        if(root->right){
           util(root->right,targetSum,sum); 
        }
        path.pop_back();
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        int sum = 0;
        util(root,targetSum,sum);
        return ans;
    }
