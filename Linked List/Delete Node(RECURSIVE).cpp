/*
We are deleting node recursively
*/
node* deleteNode(node* head,int pos){
   if(head==NULL){
     return head;
   }
   if(pos==0){
     node* a=head;
     head=head->next;
     delete a;
     return head;
   }
   node* temp = deleteNode(head->next,pos-1)
   head->next=temp;
   return head;
}
