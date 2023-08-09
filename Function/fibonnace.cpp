#include<iostream>
using namespace std;

int fibbonacenum(int a){
    if(a==0){
        return 0;
    }
    else if(a==1){
        return 1;
    }
    else{
        return fibbonacenum(a-1)+fibbonacenum(a-2);
    }
}

int main(){
    int a;
    cout<<"Enter the value of a:"<<a<<endl;
    cin>>a;
    cout<<"The fibbonace number is:"<<fibbonacenum(a)<<endl;
}