/*
---GFG Link--- https://practice.geeksforgeeks.org/problems/tree-from-postorder-and-inorder/1
*/
Node* buildTreeUtil(int in[],int post[],int is,int ie,int* postIn){
    if(is>ie){
        return NULL;
    }
   
    Node* root = new Node(post[*postIn]);
    (*postIn)--;
    
    int inIndex;
    for(int i=is; i<=ie; i++){
        if(in[i]==root->data){
          inIndex = i;
          break;
        }
    }
    
    root->right = buildTreeUtil(in,post,inIndex+1,ie,postIn);
    root->left = buildTreeUtil(in,post,is,inIndex-1,postIn);
    
    return root;
    
}

Node *buildTree(int in[], int post[], int n) {
    // Your code here
    int postIn = n-1;
    Node* ans = buildTreeUtil(in,post,0,n-1,&postIn);
    return ans;
}
