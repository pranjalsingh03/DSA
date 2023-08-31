#include<iostream>
using namespace std;

void swap(int& first, int& second){
    int temp=first;
    first=second;
    second=temp;
}
int main(){
    int a=10;
    int b=20;
    cout<<"Before swapping a= "<<a<<" b= "<<b;
    swap(a,b);
    cout<<"\nAfter swapping a= "<<a<<" b= "<<b;
}