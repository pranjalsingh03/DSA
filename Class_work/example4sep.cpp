#include<iostream>
using namespace std;

class X {
    private:
    int a;
    public:
    void set_a(int a){
        this->a=a;
    }
    int Print_a(){
        cout<<"a= "<<a<<endl;
    }
};
int main(){
    X xobject;
    int a =10;
    xobject.set_a(a);
    xobject.Print_a();
}