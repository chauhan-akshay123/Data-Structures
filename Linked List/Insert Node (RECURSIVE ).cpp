/*
We have to insert a node in a linked list recursively
*/
node* insertNode(node* head,int i,int data){
      if(head==NULL){
         return head;
      }
      if(i==0){
        node* newNode = new node(data);
        newNode->next = head;
        head=newNode;
      }
      node* temp = insertNode(head->next,i-1,data);
      head->next=temp;
      return head;
}
