// sequential searching

#include<iostream>
using namespace std;

int main(){
    int n, i ,j,k,l,arr[10];
    cout<<"Enter the number of elements:";
    cin>>n;
    for(i=0;i<n;i++)
    cin>>arr[i];

    cout<<"Enter the Number you want to search:";
    cin>>k;
    for(i=0;i<n;i++){
    if (arr[i]==k)
    {
        cout<<k<<" Resut found at position "<<i;
        return 0;
    }
    else{
    cout<<k<<" Not found";
    }
    return 0;
}
}