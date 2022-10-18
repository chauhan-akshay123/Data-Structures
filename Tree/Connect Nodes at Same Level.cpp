/*
---GFG Link--- https://practice.geeksforgeeks.org/problems/connect-nodes-at-same-level/1
*/

void connect(Node *root)
    {
        queue<Node*> q;
        q.push(root);
        if(root!=NULL){
          while(!q.empty()){
           int size = q.size();
           while(size>0){
               Node* temp;
               if(size>1){
                 temp = q.front();
                 q.pop();  
                 Node* nextadd = q.front();
                 temp->nextRight = nextadd;
               }else{
               temp = q.front();
               q.pop();
               }
               if(temp->left){
                  q.push(temp->left); 
               }
               if(temp->right){
                 q.push(temp->right);  
               }
               size--;
           }
          }    
        }
       // Your Code Here
    } 
