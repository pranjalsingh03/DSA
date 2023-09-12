#include<iostream>
#include<fstream>
using namespace std;

int main(){
    char s[30];
    ofstream fileout;
    fstream filein;
    // fileout.open("data.txt",ios::app);
    // fileout<<"India\n";
    // fileout<<"USA\n";
    // fileout<<"UK\n";
    // fileout.close();
    // filein.open("data.txt");
    // filein.getline(s,30);
    // cout<<s;

    fileout.open("hello.txt",ios::out);
    fileout<<"Hello to the programming world";
    fileout.close();
    filein.open("hello.txt" ,ios::in|ios::out);
    
    cout<<filein.tellg()<<endl;
    cout<<filein.tellp()<<endl;
    filein.seekp(9);
    filein.seekg(12);
    cout<<filein.tellg()<<endl;
    cout<<filein.tellp()<<endl;
    filein>>s;
    cout<<s<<endl;
}