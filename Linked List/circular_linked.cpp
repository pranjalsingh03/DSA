//insertion at end of cll

current =head
newnode->data=new node
new node->data=new node
if(head==NULL){
    head=new node
}
while(current->next!=head){
    current=current->next
}
new node ->next=new node


//insertion at end of cll

current =head
newnode->data=item
new node->next=new node
if(head==NULL){
    head=new node
}
while(current->next!=head){
    current=current->next
}
new node ->next=head
current->next=new node
head=new node


//Deletion at end of cll


current =head
prev=NULL
if(head==NULL){
    "Underflow"
}
while(current->next!=head){
    prev =current
    current=current->next
}
prev->next=aurrent->next
free(current)


//Deletion at froipnt of cll


current =head
if(head==NULL){
    head=new node
}
while(current->next!=head){
    current=current->next
}
head =head->next
current->next=head