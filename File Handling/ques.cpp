#include<iostream>
#include<fstream>
using namespace std;


int main(){
    ofstream file("hello.txt");
    if(!file){
        cout<<"Error";
    }
    int n;
    cin>>n;
    for(int i=1;i<n-1;i++){
        file<<i*12<<endl;
    }
    file.close();
}