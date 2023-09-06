#include<iostream>
using namespace std;

class Test{
    int a=10;
    public:
    Test(){
        cout<<"Object is created"<<endl;
    }
    void show(){
        cout<<"Value of a: "<<a<<endl;
    }
};

int main(){
    int a=10;
    int *ptr;
    cout<<"Value of a is "<<a<<endl;
    cout<<"Address of Pointer is "<<ptr<<endl;
    Test t;
    t.show();
    
}