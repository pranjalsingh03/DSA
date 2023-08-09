#include<iostream>
using namespace std;
int main(){
    int i,n,k,l,item,j, arr[10];
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the position where you want to insert the value:";
    cin>>k;
    cout<<"Enter the value you want to insert:";
    cin>>item;
    for(j=n-1;j>=k;j--){
        arr[j+1]=arr[j];
    }
    arr[k]=item;
    n=n+1;
    for(l=0;l<n;l++){
        cout<<arr[l]<<endl;
    }
    return 0;
} 
