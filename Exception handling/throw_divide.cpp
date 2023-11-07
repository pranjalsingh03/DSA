#include<iostream>
using namespace std;

void divide(int x){
    try{
        if(x==0){
            throw x;
        }
        else{
            cout<<"Division: "<<10/x<<endl;
        }
    }
    catch(int x){
        cout<<"Exception caught"<<endl;
    }
}

int main(){
    divide(0);
    divide(2);
    return 0;
}