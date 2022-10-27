/*
---Leetcode LINK--- https://leetcode.com/problems/binary-tree-maximum-path-sum/
*/
   int util(TreeNode* root, int &maxi){
               if(root==NULL){
                  return 0; 
               }
               int leftSum = max(0,util(root->left,maxi));
               int rightSum = max(0,util(root->right,maxi ));
               maxi = max(maxi,leftSum+rightSum+root->val);
               return max(leftSum,rightSum) + root->val;
           }

    int maxPathSum(TreeNode* root){
         int maxi = INT_MIN;
        util(root,maxi);
        return maxi;
           }
