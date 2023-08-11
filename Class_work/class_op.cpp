#include<iostream>
using namespace std;

class Student

{
private:
    int rollno;
    float cgpa;/

public:
    Student();
    ~Student();
    void insert(int r,float c);
    void display();
    int rollno;
    float cgpa;
};
void main() {
    Student s1;
    s1.insert(101,8.5);
    s1.display();
    return 0;
    }
void Student::insert(int r,float c){
    rollno=r;
    cgpa=c;
    cout<<"Roll no is "<<rollno<<endl;
    cout<<"CGPA is "<<cgpa<<endl;
    }
void Student::display(){
    cout<<rollno<<" "<<cgpa<<endl;
    }
Student::Student(){
    cout<<"Constructor is called"<<endl;
    }
Student::~Student(){
    cout<<"Destructor is called"<<endl;
    }




