/*
Appending last n nodes to the first
*/

int length(node* head){  // function to find length of LL
    if(head==NULL){
        return 0;
    }
    return 1+length(head->next);
}
node* appendLast(node* head,int n){
    if(head==NULL || n==0){
        return head;
    }
    int len=length(head);
    int count=len-n;
    node* curr = head;
    for(int i=1; i<count; i++){
        curr=curr->next;
    }
    node* newhead = curr->next;
    curr->next=NULL;
    node* temp = newhead;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next=head;
    head=newhead;
    return head;
}
