/*
--- GFG LINK ---https://practice.geeksforgeeks.org/problems/level-order-traversal/1
*/
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    
    return temp;
}

// } Driver Code Ends
/* A binary tree Node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */


class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
      //Your code here
      vector <int> ans;
      queue<Node*> q;
      q.push(node);
      if(node==NULL){
         return ans; 
      }
      while(!q.empty()){
      Node* temp = q.front();
      q.pop();
      ans.push_back(temp->data);
      if(temp->left!=NULL){
         q.push(temp->left); 
      }
      if(temp->right!=NULL){
         q.push(temp->right); 
      }
      }
      return ans;
    }
};
