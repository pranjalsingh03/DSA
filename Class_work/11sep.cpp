#include<iostream>
using namespace std;

class Rectangle(){
    int l,b;
    public:
        Rectangle(int x, int y):l(x),b(y){}
        int area(){
            return(l*b);
        }
};

int main(){
    Rectangle(12,34);

}