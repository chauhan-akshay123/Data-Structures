/*
---GFG LINK--- https://practice.geeksforgeeks.org/problems/implementing-ceil-in-bst/1
*/

int findCeil(Node* root, int input) {
    int ceil = -1;
    while(root){
       if(root->data == input){
          ceil = root->data;
          return ceil;
       }    
       if(input>root->data){
          root = root->right; 
       }
       else{
           ceil = root->data;
           root = root->left;
       }
    }
    // Your code here
    return ceil;
}
