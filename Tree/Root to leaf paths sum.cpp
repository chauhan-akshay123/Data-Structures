/*
---GFG Link--- https://practice.geeksforgeeks.org/problems/root-to-leaf-paths-sum/1
*/

long long sumUtil(Node* root,int val){
    if(root==NULL){
      return 0;    
    }
    val = (val*10 + root->data);
    if(root->left==NULL && root->right==NULL){
      return val;    
    }
    return sumUtil(root->left,val) + sumUtil(root->right,val);
}

long long treePathsSum(Node *root)
{
    //Your code here
    long long ans = sumUtil(root,0);
    return ans;
}
