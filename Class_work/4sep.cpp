#include<iostream>
#include<functional>
using namespace std;

class X{
    public:
    int a;
    void f(int b){
        cout<<"The value of b : "<<b<<endl;

    }
};
int main(){
    int X::*ptiptr=&X::a;

    void(X::*ptfptr)(int)=&X::f;

    X xobject;

    cout<<"The value of a is "<< xobject.*ptiptr<<endl;

    (xobject.*ptfptr)(20);
}