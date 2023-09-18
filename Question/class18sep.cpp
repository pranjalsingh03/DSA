#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int count;
    ifstream in("hello.txt");
    // ofstream out("output.txt");
    if(!in){
        cout<<"Can't open file";
        return 1;}
        else{
        while(in.eof()!=0){
            // string s,s2="";
            count++;
            // return count;
        }}
        cout<<"count is "<<count;
}
