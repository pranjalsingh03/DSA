#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // ofstream of("result.txt");
    // of<<"hello\n";
    // of<<"world\n";
    // of<<100;
    // of.close();
    // cout<<"data saved\n";
    char s[10];
    ifstream inf("result.txt");
    inf>>s;
    cout<<s<<endl;
    inf>>s;
    cout<<s<<endl;
    inf>>s;
    cout<<s;
    inf.close();
    
}

