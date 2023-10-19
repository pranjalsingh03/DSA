#include<iostream>
using namespace std;

class N{
    protected:
        int n;
    public:
    N(int y){
        n=y;
        cout<<"\nIn N";
    }
};

class M{
    protected:
        int m;
    public:
    M(int x){
        m=x;
        cout<<"\nIn M";
    }
};


class P:public M,public N{
    int l;
    public:
    P(int x,int y,int z):M(x),N(y){
        l=z;
        cout<<"\nIn P";
    }
    void show(){
        cout<<"\n"<<m<<" "<<n<<" "<<l;
    }
};

int main(){
    P p(1,2,3);
    p.show();
    return 0;
}