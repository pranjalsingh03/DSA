//Deletion algorithm

#include<iostream>
using namespace std;

int main(){
    int i,l,j,k,n,x,y, NA[10];
    cout<<"Enter the no of elements:";
    cin>>n;
    for(i=0;i<n;i++){
        cin>>NA[i];
    }
    cout<<"Enter the palce where you want to delete:";
    cin>>k;
    for(i=k+1;i<n;i++){
        NA[i-1]=NA[i];
    }
    n=n-1;
    for(l=0;l<n;l++){
        cout<<NA[l]<<",";
    }
}