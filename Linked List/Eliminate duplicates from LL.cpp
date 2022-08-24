/*
We have to eliminate duplicates from the LL
*/
// Approach-1 --- 
node* removeDuplicates(node* head){
      if(head==NULL){
         return head;
      }
      node* ptr=head,*temp=NULL,tmp=NULL;
      while(ptr!=NULL && ptr->next!=NULL){
           temp=ptr->next;
           ptr->next=NULL;
        while(temp!=NULL && ptr->data==temp->data){
             tmp=temp;
             temp=temp->next;
             tmp->next=NULL;
             delete tmp;
        }
        ptr->next=temp;
        ptr=temp;
      }
      return head;
}
// Approach-2 ----
node* removeDuplicates(node* head){
     if(head==NULL){
        return head;
     }
     node* curr=head;
     while(curr->next!=NULL){
       if(curr->data==curr->next->data){
         curr->next=curr->next->next;
       }
       else{
           curr=curr->next;
       }
     }
}
