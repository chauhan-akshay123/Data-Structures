/*
Finding a node in a linked list
*/
int findNode(node* head,int data){
    int count=0; 
    node* temp = head;
    while(temp!=NULL){
        if(temp->data==data){
           return count; 
        }
        temp=temp->next;
        count++;
    }
    if(temp==NULL){
      return -1;
    }
}
