#include<iostream>
using namespace std;
class time {
    int hrs;
    public:
    time(int t)
    {
        hrs=t/60;
    }
};
void main(){
    time t1(85);
}

void show(){
    cout<<"hrs="<<hrs<<endl;
}
