/*
---Leetcode LINK--- https://leetcode.com/problems/two-sum-iv-input-is-a-bst/
*/

class BSTIterator {
  stack<TreeNode*> myStack;
  // reverse -> true -> before
  // reverse -> false -> next;
  bool reverse = true;
    
  public:
  BSTIterator(TreeNode* root, bool isReverse){
      reverse = isReverse;
      pushAll(root);
  }
  
  // return  whether we have next smallest number
  bool hasNext(){
      return !myStack.empty();
  }  
  
  int next(){
      TreeNode* temp = myStack.top();
      myStack.pop();
      if(!reverse) pushAll(temp->right);
      else pushAll(temp->left);
      return temp->val;
  }  
 
  private:
    void pushAll(TreeNode* root){
        while(root!=NULL){
            myStack.push(root);
            if(reverse==true){
              root = root->right;  
            }
            else{
                root=root->left;
            }
        }
    }
    
};

class Solution {
public:
    bool findTarget(TreeNode* root, int k){
        if(!root) return false;
        BSTIterator l(root,false);
        BSTIterator r(root,true);
        
        int i = l.next();
        int j = r.next();
        
        while(i<j){
            if(i+j == k) return true;
            else if(i+j < k) i=l.next();
            else j = r.next();
        }
        return false;
    }
};
