/*
---GFG Link--- https://practice.geeksforgeeks.org/problems/mirror-tree/1
*/

 void mirror(Node* node) {
        // code here
       stack<Node*> st;
       st.push(node);
       while(!st.empty()){
          Node* temp = st.top();
          st.pop();
          if(temp!=NULL){
             st.push(temp->left);
             st.push(temp->right);
             swap(temp->left,temp->right);
          }
       }
    }
