/*
here we are printing reverse LL
*/
void printReverse(node* head){
   if(head==NULL){
     return; 
   }
   printReverse(head->next);
   std::cout<<head->data<<"  ";
}
