
# include <iostream>
using namespace std;
class node{
  public:
  int data;
  node* next;
  node(int data){
    this->data = data;
    this->next = NULL;
  }
};
void print(node* head){  // printing data
  node* temp = head;
  while(temp!=NULL){
    std::cout<<temp->data<<" ";
    temp=temp->next;
  }
  node* takeInput(){  // for taking data input
    int data;
    std::cin>>data;
    node* head = NULL;
    node* tail = NULL:
    while(data!=-1){
      node newNode = new node(data);
      if(head==NULL){
        head = newNode;
        tail=newNode;
      }
      else{
        tail->next = newNode;
        tail=tail->next;
      }
      std::cin>>data;
    }
    return head;
  }
int main(){
  node* head = takeInput(); // taking input all node data
  print(head);             // traversing all the node and printing data
  return 0;
