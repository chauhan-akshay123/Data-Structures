/*
we are finding length of the Linked list recursively
*/
int length(node* head){
   if(head==NULLL){
     return 0;
   }
   int count = length(head->next);
   return 1+count;
}
