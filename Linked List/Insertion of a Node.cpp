# include <iostream>
using namespace std;
node* insertNode(node* head,int i,int data){
  node* newNode = new node(data);
  int count=0;
  node* temp = head;
  if(i==0){            // case-1 At the begining
    newNode->next=head;
    head=newNode;
    return head;
  }
  while(temp!=NULL && count<i-1){ // case-2 insert at a given position
      temp=temp->next;
      count++;
  }
  if(temp!=NULL){
    node* a = temp->next;
    temp->next=newNode;
    newNode->next=a;
  }
  return head; // return new head pointer after insertion
}
int main(){ 
  return 0;
}
