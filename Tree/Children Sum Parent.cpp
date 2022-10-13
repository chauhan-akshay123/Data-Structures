/*
--- GFG LINK --- https://practice.geeksforgeeks.org/problems/children-sum-parent/1
*/

class Solution{
    public:
    //Function to check whether all nodes of a tree have the value 
    //equal to the sum of their child nodes.
    int isSumProperty(Node *root)
    {
     if(root==NULL || (root->left==NULL && root->right==NULL)){
        return 1; 
     }
     int leftSum=0;
     int rightSum=0;
     if(root->left!=NULL){
       leftSum = root->left->data; 
     }
     if(root->right!=NULL){
        rightSum = root->right->data; 
     }
     if((leftSum+rightSum) == root->data && isSumProperty(root->left) && isSumProperty(root->right)){
         return 1;
     }
     else{
       return 0; 
     }
    }
};
