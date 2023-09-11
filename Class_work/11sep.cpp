#include<iostream>
using namespace std;

// class Rectangle{
//     int l,b;
//     public:
//         Rectangle(int x, int y):l(x),b(y){}
//         int area(){
//             return(l*b);
//         }
// };

// int main(){
//     Rectangle(12,34);

// }


class Test{
    public:
    Test(){
        cout<<"object created"<<endl;
    }
    ~Test(){
        cout<<"object is destructed"<<endl;
    }
};

int main(){
    Test t;
    cout<<"nejfrn"<<endl;
    return 0;
}