//Deletion algorithm

#include<iostream>
using namespace std;

void Toprint(int NA[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << NA[i] <<",";
    }
    
};

int search(int NA[]){
    int n;
    cout<<"Enter the number you want to search:";
    cin>>n;
    for (int i = 0; i < 10; i++)
    {
        if (NA[i]==n)
        {
            cout<<"Number found at position "<<i;
            return 0;
        }
        
    }
    cout<<"Number not found";
    return 0;
}


int main(){
    int i,l,j,k,n,x,y, NA[10];
    cout<<"Enter the no of elements:";
    cin>>n;
    for(i=0;i<n;i++){
        cin>>NA[i];
    }
    Toprint(NA,n);
    cout<<"Enter the palce where you want to delete:";
    cin>>k;
    for(i=k+1;i<n;i++){
        NA[i-1]=NA[i];
    }
    n=n-1;
    for(l=0;l<n;l++){
        cout<<NA[l]<<",";
    }
    search(NA);
}