#include<iostream>
using namespace std;

class Classthrow{

};
void add(){
    int a=10,b=0;
    if(a==0|| b==0){
        throw Classthrow();
    }
    cout<<"Addition: "<<a+b;
    }
int main(){
    try{
        add();
    }
    catch(Classthrow c){
        cout<<"Exception caught";
    }
    return 0;
}