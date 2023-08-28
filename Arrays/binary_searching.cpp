#include<iostream>
using namespace std;

int main(){
    int i,n,arr[10];
    cout<<"Enter the no of array element: ";
    cin>>n;
    for(i=0;i<n;i++)
    cin>>arr[i];
    for (i = 0; i < n; i++)
    {
        cout<<arr[i]<<",";
    }
    int k;
    int st=0;
    int last=n-1;
    int mid;
    mid= (st+last)/2;
    cout<<"Enter the element you want to search: ";
    cin>>k;
    while (st<=last && arr[mid]!=k)
    {
        if (arr[mid]>k)
        {
            last=mid-1;
        }
        else{
        st=mid+1;
        mid=(st+last)/2;
    }}
    if(arr[mid]==k){
    return mid;
    }
    else
    return -1;
    if(k!=-1)
    cout<<"result found"<<i;

}
