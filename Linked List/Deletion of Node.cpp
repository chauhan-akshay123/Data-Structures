/*
We are deleting node at a given position.
Indexing and positioning are starting from 0.
*/
 
node* deleteNode(node* head,int pos){
    if(head==NULL){
       return head;
    }
    int count=0;
    node* temp = head;
    if(pos==NULL){
       head=head->next;
       delete temp;
       return head;
    }
    while(temp->next!=NULL && count<pos-1){
         temp=temp->next;
         count++;
    }
    if(temp->next!=NULL){
      node* a = temp->next;
      temp->next=temp->next->next;
      delete a;   
    }
    return head;
}
