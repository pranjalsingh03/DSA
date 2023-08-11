// creeated class employe

#include <iostream>
using namespace std;
class Employe{
    public:
    string desigination;
    int age;
    string name;
    double salary;
    Employe(string d,string n,double s,int i){
        age=i;
        name=n;
        salary=s;
        desigination=d;
    }
    void display(){
        cout<<desigination<<" "<<name<<" "<<salary<<" "<<age<<endl;
    }
};
int main(){
    Employe e1=Employe("HOD","Rahul",50000,23);
    Employe e2=Employe("AO","Rohit",60000,21);
    Employe e3=Employe("HOD","Amit",242422,34);
    Employe e4=Employe("AO","Rohan",50000,23);
    
    // cout<<"desigination"<<" "<<"name"<<" "<<"salary"<<" "<<"age"<<endl;
    e1.display();
    e2.display();
    e3.display();
    e4.display();
    return 0;
}
