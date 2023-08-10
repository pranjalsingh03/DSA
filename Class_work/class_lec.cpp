//to maintain the student record consit of name rool no and cgpa of the student

#include<iostream>
using namespace std;

struct student{
    string name;
    int rollno;
    float cgpa;
};

int main(){
    student s1;
    s1.name="Rahul";
    s1.rollno=101;
    s1.cgpa=8.5;
    cout<<s1.name<<" "<<s1.rollno<<" "<<s1.cgpa<<endl;
    return 0;
}
