#include<iostream>
using namespace std;
int main(){
    int myNum=10;
    int *ptr;
    ptr=&myNum;
    cout<<"Address of myNum "<<ptr;
    cout<<"\nValue of myNum "<<*ptr;
}