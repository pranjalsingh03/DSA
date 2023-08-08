#include<iostream>

using namespace std;
int myfunc(int a){
    cout<<"the value of a is:"<<a<<endl;
    return a*a;
}
int main(){
    int ab=10;
    cout<<ab<<endl;
    int b;
    cout<<"Enter the value of b:"<<b;
    cin>>b;
    cout<<"The value of b is: "<<b<<endl;
    cout<<myfunc(12)<<endl;

}

