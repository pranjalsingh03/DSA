// Create the class student consist of roll no and cgpa of student using void

#include<iostream>
using namespace std;

class student{
    public:
    int rollno;
    float cgpa;
    void insert(int r,float c){
        rollno=r;
        cgpa=c;
    
    
    }
    void display(){
        cout<<rollno<<" "<<cgpa<<endl;
    }
};

int main(){
    student s1;
    s1.insert(101,8.5);
    s1.display();
    return 0;
}