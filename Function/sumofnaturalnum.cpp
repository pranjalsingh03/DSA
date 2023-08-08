#include<iostream>
using namespace std;

int naturalNum(int n){
    int sum=0;
    for(int i=0;i<=n;i++){
        sum=sum+i;
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter the value of n:"<<n<<endl;
    cin>>n;
    cout<<"The sum of natural numbers are:"<<naturalNum(n)<<endl;
}