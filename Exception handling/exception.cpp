#include<iostream>
using namespace std;

void divide(int x,int y,int z){
    cout<<"\n we are inside function";
    if((x-y)!=0)
    {
        int R=z/(x-y);
        cout<<"\n Result ="<<R;
    }
    else
    {
        throw(x-y);
    }
    cout<<"\n end of function";

}

int main(){
    cout<<"Program started";
    try{
        cout<<"\n Inside try block";
        divide(10,20,30);
        divide(10,10,20);
    }
    catch(int i){
        cout<<"\n Caught one exception";
    }
    cout<<"\n end of main";
    return 0;
}