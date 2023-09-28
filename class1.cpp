#include<iostream>
using namespace std;

class demo{
    int a,b;
    public:
    demo(int x,int y){
        a=x;
        b=y;
    }
    
    void showd(){
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
    }
};

friend void operator -(demo &obj){
    obj.a=-obj.a;
    obj.b=-obj.b;
}
friend demo operator +demo(demo &obj)
int main(){
    demo obj(10,20);
    obj.showd();
    -obj;
    obj.showd();
    return 0;
}
