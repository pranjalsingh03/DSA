#include<iostream>

using namespace std;

int SumofNum(int a , int b){
    return a+b;
}

int main(){
    int a,b;
    cout<<"Enter the value of a:"<<a<<endl;
    cin>>a;
    cout<<"Enter the value of b:"<<b<<endl;
    cin>>b;
    cout<<"The sum of two numbers are:"<<SumofNum(a,b)<<endl;
}