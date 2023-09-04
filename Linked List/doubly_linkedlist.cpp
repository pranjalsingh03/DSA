#include<iostream>
using namespace std;

struct node{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *head;
void beg(int item){
    struct node *p = new struct node;
    if(p==NULL){
        cout<<"overflow";
        return;
    }
    p->data=item;
    p->next=NULL;
    p->prev=NULL;
    if(head ==NULL){
        head=p;
        cout<<"Node inserted";
        return;
    }
    else{
        p->next=head;
        head->prev=p;
        head=p;
    }
    cout<<"Node inserted\n";
}
void display(struct node *h){
    cout<<"In sorted list is: ";
    while(h!=NULL){
        cout<<h->data<<"->";
        h=h->next;
    }
}
int main(){
    int item,choice;
    do{
        cout<<"Enter the item to be inserted: ";
        cin>>item;
        beg(item);
        cout<<"Do you want to continue(1/0): ";
        cin>>choice;
    if(choice!=0){
        break;
    }
    }while(choice==0);
    display(head);
    }