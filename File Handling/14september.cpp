#include<iostream>
#include<fstream>
#include<string>
using namespace std;
// int main()
// { 
// float height[4]={17.5,15.0,3.8,5.0};
// ofstream outfile;
// outfile.open("abc");
// outfile.write(( char *)height,sizeof(height));
// outfile.close();
// float p[4];
// ifstream infile;
// infile.open("abc");
// infile.read((char*) p,32);
// cout<<p[0]<<p[1];
// return 0;
// }

class student{
    public:
    int roll;
    string name;
    int marks;
    void getdata(){
        cout<<"Enter roll no. : ";
        cin>>roll;
        cout<<"Enter name : ";
        cin>>name;
        cout<<"Enter marks : ";
        cin>>marks;
    }
    void putdata(){
        cout<<"Roll no. : "<<roll<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Marks : "<<marks<<endl;
    }
};
int main ()
{
    student s;
    s.getdata();
    ofstream outfile;
    outfile.open("student.txt");
    outfile.write((char*)&s,sizeof(s));
    outfile.close();
    student s1;
    ifstream infile;
    infile.open("student.txt");
    infile.read((char*)&s1,sizeof(s1));
    s1.putdata();
    return 0;
}
