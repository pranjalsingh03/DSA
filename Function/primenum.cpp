#include<iostream>
using namespace std;

int primenum(int n){
    int i;
    for(i=2;i<n;i++){
        if(n%i==0){
            cout<<"The number is not prime"<<endl;
            break;
        }
    }
    if(i==n){
        cout<<"The number is prime"<<endl;
    }
    return 0;
}

int main(){
    int n;
    cout<<"Enter the number:"<<n<<endl;
    cin>>n;
    cout<<primenum(n);

}