#include<iostream>
#include<string.h>
using namespace std;

class student{
    int roll;
    char name[20];
    public:
    void getdata(){
        cout<<"Enter roll no. and name"<<endl;
        cin>>roll>>name;
    }
    void showdata(){
        cout<<"Roll no. is "<<roll<<endl;
        cout<<"Name is "<<name<<endl;
    }
};
class result: public student{
    int marks[3];
    public:
    void getdata(){
        student::getdata();
        cout<<"Enter marks of 3 subjects"<<endl;
        for (int i = 0; i < 3; i++)
        {
            cin>>marks[i];
        }
    }
    void showdata(){
        student::showdata();
        cout<<"Marks are "<<endl;
        for (int i = 0; i < 3; i++)
        {
            cout<<marks[i]<<endl;
        }
    }
};

void display(){
    
}

int main() {
    student s1;
    s1.getdata();
    s1.showdata();
    return 0;
}
