/*
Here we are going to implement tree takeInput and PrintTree functions for creating and traversal of tree
*/
# include <iostream>
# include <vector>
template <typename T>
class TreeNode{
public:
  T data;
  vector<TreeNode<T>*> children;
  TreeNode(T data){
  this->data=data;
  }
};
TreeNode<int>* takeInput(){     // function to take Input tree Nodes
int rootDatal;
  std::cout<<"Enter data\n";
  std::cin>>rootData;
  int n;
  std::cout<<"Enter the number of children of "<<rootData<<"\n;
  std::cin>>n;
  for(int i=0; i<n; i++){
  TreeNode<int>* child = takeInput();   // takeInput function recursively on every child node
    root->children.push_back(child);
  }
  return root;
}
void printTree(TreeNode<int>*  root){  // function to print tree node
if(root==NULL){
  return;
}
std::cout<<root->data<<":";
  for(int i=0; i<root->children.size(); i++){
      std::cout<<root->children[i]->data<<",";
  }
  std::cout<<"\n";
  for(int i=0; i<root->children.size(); i++){
      printTree(root->children[i]);      // print function recursively on every child node
  }
}
void deleteTree(TreeNode<int>* root){   // we have to deallocate memory manually
     for(int i=0; i<root->children.size(); i++){
         deleteTree(root->children[i]);        // recursively deleteTree function on every node
     }
     delete root;
}
using namespace std;

int main(){
TreeNode<int>* root = TakeInput();
 printTree(root);
 deleteTree(root);
  return 0;
}
