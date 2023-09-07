#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string s1="arlcome";
    string s2="welcome";
    cout<<s1.find("lc")<<endl;
    cout<<s2.rfind("ea")<<endl;
    cout << s2.find_first_of("e") << endl;
    cout << s2.find_last_of("e") << endl;
}