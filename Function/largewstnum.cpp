#include<iostream>
using namespace std;

int largestnum(int a,int b, int c){
    if(a>b){
        if(a>c){
            return a;
        }
        else{
            return c;
        }
    }
    else{
        if(b>c){
            return b;
        }
        else{
            return c;
        }
    }
}

int main(){
    int a,b,c;
    cout<<"Enter the value of a:"<<a<<endl;
    cin>>a;
    cout<<"Enter the value of b:"<<b<<endl;
    cin>>b;
    cout<<"Enter the value of c:"<<c<<endl;
    cin>>c;
    cout<<"The largest number is:"<<largestnum(a,b,c)<<endl;
}
