#include<iostream>
#include<string>
using namespace std;

// main(){
//     string s1,s2;
//     cin>>s1>>s2;
//     cout<<"s1 = "<<s1<<endl;
//     cout<<"s2 = "<<s2<<endl;
//     string s3;
//     s3=s1;
//     cout<<"s3 = "<<s3<<endl;
//     s3="neither "+s1+" nor";
//     s3+=s2;
//     cout<<"s3 = "<<s3<<endl;
//     s1.swap(s2);
//     cout<<s1<<" nor " <<s2<<endl;
// }

int main(){
    string s="austraila";
    s.insert(3,"nzl");
    cout<<s<<endl;

    s.erase(3,3);
    cout<<s<<endl;

    s.replace(3,2,"india");
    cout<<s<<endl;

    //austenglandila
}