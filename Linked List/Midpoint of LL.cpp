/*
here we have to find the mid-point of the linked list
for this we have two pointers fast and slow 
fast moves two steps ahead of slow 
by the time fast reaches at the end slow is on the middle node
*/
node* midPoint(node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* slow = head;
    node* fast = head->next;
    while(fast!=NULL && fast->next!=NULL){
          slow=slow->next;
          fast=fast->next->next;
    }
    return slow;
}
