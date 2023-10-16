#include<iostream>
using namespace std;

class A{
    int x;
    public:
    A(int a){
        x=a;
        cout<<"\nCalling base class parametrized "<<x;

    }
    ~A(){
        cout<<"\nCalling default base class destructor";
    }
};

class B:public A{
    int l;
    public:
    B(int p):A(p){
        l=p;
        cout<<"\nCalling derived class parametrized "<<l;
    }
    ~B() {
        cout << "\nCalling derived class destructor ";
        }
};

int main(){
    B obj2(1);
    return 0;
}