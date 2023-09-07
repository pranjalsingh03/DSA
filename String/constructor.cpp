#include<iostream>
#include<string>

using namespace std;

class Box
{
public:
    double length,width,height;
    Box(){
        length=width=height=-1;
        cout<<"Object created"<<endl;
    }
};

int main(){
    Box b;
    Box b1(5.5,12.4,4,4.8);
}
