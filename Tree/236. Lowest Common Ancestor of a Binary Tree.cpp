/*
---Leetcode LINK--- https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/
*/

// APPROACH -1 

    bool findPath(TreeNode* root,vector<TreeNode*> &path, TreeNode* n){
         if(root==NULL){
            return false; 
         }
         path.push_back(root);
         if(root==n){
           return true;  
         }
         if(findPath(root->left,path,n) || findPath(root->right,path,n)){
            return true;  
         }
         path.pop_back();
         return false;
    }
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> path1,path2;
        if(!findPath(root,path1,p) || !findPath(root,path2,q)){
           return NULL; 
        }
        TreeNode* ans = NULL;
        for(int i=0; i<path1.size() && i<path2.size(); i++){
            if(path1[i]==path2[i]){
              ans = path2[i];  
            }
        }
        return ans;
    }


 // APPROACH -2 (BEST)
