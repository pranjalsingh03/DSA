
#include<iostream>
#include<string.h>
using namespace std;



class Father{
    protected:
    string Surname="Singh";
};
class Son1:Father{
    string Name="Magan";
    public:
    void show(){
        cout<<Name<<" "<<Surname<<endl;
    }
};
class Son2:Father{
    string Name="Pranjal";
    public:
    void show(){
        cout<<Name<<" "<<Surname<<endl;
    }
};

int main(){
    Son1 s1;
    Son2 s2;
    s1.show();
    s2.show();
    return 0;
}