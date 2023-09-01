#include<iostream>
using namespace std;

int main(){
    int x=10;
    int& ref=x;
    ref=20;

    cout<<"Value of x "<<x;
    ref=30;
    cout<<"\nValue of ref "<<ref;

}