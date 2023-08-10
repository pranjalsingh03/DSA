// take the input in number and display the day corressponding to that number

// Path: Question\lecture3_ouestion3.cpp

#include<iostream>
using namespace std;
int main() {
    int num;
    cout<<"Enter the number:";
    cin>>num;
    switch(num){
        case 0:
        cout<<"Weekend";
        break;
        case 1:
        cout<<"Sunday";
        break;
        case 2:
        cout<<"Monday";
        break;
        case 3:
        cout<<"Tuesday";
        break;
        case 4:
        cout<<"Wednesday";
        break;
        case 5:
        cout<<"Thursday";
        break;
        case 6:
        cout<<"Friday";
        break;
        case 7:
        cout<<"Saturday";
        break;
        default:
        cout<<"Invalid input";
        break;
    }
    return 0;
}