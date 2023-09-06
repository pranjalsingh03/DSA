#include<iostream>
using namespace std;
class Test{
    int a =10;
    public:
    Test(){
        cout<<"Object created for Test"<<endl;
    }
    void show(){
        cout<<"Value of a :"<<a<<endl;
    }
};

struct Student{
    int x=10;
};

int main(){
    // Test t;
    // t.show();
    struct Student *s;
    Student s1;
    s=&s1;
    cout<<s->x<<endl;
    Test *tp;
    Test t;
    tp=&t;
    tp->show();
    t.show();
}
