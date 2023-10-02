#include<iostream>
using namespace std;

class demo{
    int a,b;
    public:
    demo(int x, int y)
    {
        a=x;
        b=y;
    }
    void show()
    {
        cout<<"a="<<a<<"\t"<<"b="<<b<<endl;
    }
    friend demo operator +(demo &obj, demo &obj2);
};
demo operator+(demo &obj, demo &obj2){
    demo temp(0,0);
    temp.a=obj.a+obj2.a;
    temp.a=obj.b+obj2.b;
    return temp;
}
int main(){
    demo ob(10, 20),ob1(30,40),ob2(0,0);
    ob2=ob+ob1;
    ob2.show();
    return 0;
}