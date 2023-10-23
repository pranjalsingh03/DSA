#include<iostream>
using namespace std;

int stk[40];
int top=-1; 


void push(int a){
    if (top==40-1)
    {
        cout<<"stack underflow";
        return;
    }
    top++;
    stk[top]=a;
    std::cout << "element pushed into stack" <<a<< std::endl;
}

void pop(){
    if (top==-1)
    {
        std::cout << "stack is empty" << std::endl;
    }
    std::cout << "element popped from the stack " <<stk[top]<< std::endl;
    top--;
}

void display(){
    if (top==-1)
    {
        std::cout << "stack is empty" << std::endl;
        return;
    }
    std::cout << "element of stack are" << std::endl;
    for (int i = top; i >=0; i--)
    {
        cout<<stk[i];
    }
    std::cout << std::endl;
    
    
}

int main(){
    int a , b;
    push(1);
    push(2);
    push(3);
    push(4);
    pop();
    display();
}