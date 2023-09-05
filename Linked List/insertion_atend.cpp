#include<iostream>
using namespace std;

struct node{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *head;

void at_end(int item){
    struct node *p=new struct node;
    if(p==NULL){
        cout<<"overflow";
        return;

    }
    p->data=item;
    p->next=NULL;
    p->prev=NULL;

    if (head==NULL){
        head=p;
        cout<<"Node inserted";
        return;

    }
    else{
        struct node *temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        p->prev = temp;
        temp->next=p;
        cout<<"Node inserted";
    }
}


void display(struct node *p){
    cout<<"In list is: ";
    while(p!=NULL){
        cout<<p->data<<"->";
        p=p->next;
    }
}
int main(){
    int item,choice;
    do{
        cout<<"Enter the item to be inserted: ";
        cin>>item;
        at_end(item);
        cout<<"Do you want to continue(1/0): ";
        cin>>choice;
    if(choice!=0){
        break;
    }
    }while(choice==0);
    display(head);
    }