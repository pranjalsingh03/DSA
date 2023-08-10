//Qustion no 1 of neo colab of lecture 2

// #include<iostream>
// using namespace std;    

// int main(){
//     string name , password;
//     cin>> name >>password;
//     cout<<"Name: "<<name<<endl ;
//     cout<<"Password: "<<password<<endl;
// }


//Question no2 of neo colab of lecture 2

#include<iostream>
using namespace std;

//converting usewr innput no into binary and dispaly the decimal value of binary no

//output should be of decimal in binary

int main(){
    int n;
    cin>>n;
    int ans=0;
    int p=1;
    while(n>0){
        int last_bit=(n&1);
        ans+=p*last_bit;
        p=p*10;
        n=n>>1;
    }
    cout<<ans<<endl;
    return 0;
}