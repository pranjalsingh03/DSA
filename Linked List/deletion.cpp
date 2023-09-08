#include<iostream>
#include<cstdlib>
using namespace std;

struct node{
    struct node *prev;
    int data;
    struct node *next;

};
struct node *head;

void beg(int item){
    struct node *p =new struct node;
    if(p==NULL){
        cout<<"overflow";
        return;
    }
    p->data=item;
    p->next=NULL;
    p->prev=NULL;
    if(head==NULL){
        cout<<"In Node Inserted"<<endl;
        return;
    }
    p->next=head;
    head->prev=p;
    head=p;
    cout<<"Node Inserted"<<endl;
}

void delloc(int loc){
    struct node *ptr ,*prevnode;
    if(head==NULL){
        cout<<"In underflow"<<endl;
        return;

    }
    ptr=head;
    prevnode=NULL;
    if(loc==0){
        cout<<"In deleted item is: "<<head->data<<endl;
        head=head->next;
        if(head!=NULL){
            head->prev=NULL;
        }
    }
    else{
        for(int i=1;i<=loc;i++){
            prevnode=ptr;
            ptr=ptr->next;
            if(ptr==NULL){
                cout<<"In Node not found"<<endl;
                return;
            }
        }
    }
    cout<<"In deleted item is: "<<ptr->data;
    if(ptr->next!=NULL){
        ptr->next->prev=prevnode;
        prevnode->next=ptr->next;
    }
    else{
        prevnode->next=ptr->next;

    }
    free(ptr);
}
void display(struct node *p){
    cout<<"In list is: ";
    while(p!=NULL){
        cout<<p->data<<"->";
        p=p->next;
    }
}

int main(){
    int item,choice,ch,loc;
    do{
        cout<<"In Enter choice: \t 1.Insert\t2.Delete at loc:";
        cin>>choice;
        switch(choice){
            case 1:
            cout<<"In enter item: ";
            cin>>item;
            beg(item);
            break;
            case 2:
            cout<<"In enter loc: ";
            cin>>loc;
            delloc(loc);
            break;
            default:
            cout<<"In Inserted choice\n";
            break;

        }
        display(head);
        cout<<"In enter 0 to countinue: ";
        cin>>ch;
        if(ch!=0){
            break;
        }

    }
    while(ch==0);
        return 0;
    
}