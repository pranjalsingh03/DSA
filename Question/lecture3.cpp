//developing a basic calculator that performs the arthimatic of two numbers

#include <iostream>
using namespace std;
int main() {
    char op;
    float num1, num2;
    cout << "Enter two operands: ";
    cin >> num1 >> num2;
    // Should display each and every the arthimatic operation of the number

    cout<<"The addition of the number is: "<<num1+num2<<endl;
    cout<<"The subtraction of the number is: "<<num1-num2<<endl;
    cout<<"The multiplication of the number is: "<<num1*num2<<endl;
    cout<<"The division of the number is: "<<num1/num2<<endl;
    cout<<"The modulus of the number is: "<<(int)num1%(int)num2<<endl;

    return 0;
}