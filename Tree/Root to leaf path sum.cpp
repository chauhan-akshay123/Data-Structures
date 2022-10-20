/*

Given a binary tree and an integer S, check whether there is root to leaf path with its sum as S.

---GFG Link--- https://practice.geeksforgeeks.org/problems/root-to-leaf-path-sum/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_articl
*/

    bool hasPathSum(Node *root, int S) {
    // Your code here
    if(root==NULL){
       return 0;    
    }
    bool ans = false;
    int subSum = S - root->data;
    
    if(subSum==0 && root->left==NULL && root->right==NULL){
       return true;   
    }
    
    if(root->left){
      ans = ans || hasPathSum(root->left,subSum);    
    }
    if(root->right){
      ans = ans || hasPathSum(root->right,subSum);    
    }
    return ans;
}
