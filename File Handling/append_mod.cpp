#include<iostream>
#include<fstream>
using namespace std;

int main(){
    char s[30];
    ofstream fileout;
    ifstream filein;
    fileout.open("data.txt",ios::app);
    fileout<<"India\n";
    fileout<<"USA\n";
    fileout<<"UK\n";
    fileout.close();
    filein.open("data.txt");
    filein.getline(s,30);
    cout<<s;
}