#include <iostream>
#include <cmath>
using namespace std;

int stk[40];
int top = -1;

void push(int n)
{
    stk[++top] = n;
}

void pop()
{
    if (top == -1)
    {
        cout << "Stack is empty";
        return;
    }
    --top;
}

int evaluatePostfix(string exp)
{
    int i = 0;
    while (exp[i] != ')')
    {
        if (isdigit(exp[i]))
        {
            push(exp[i] - '0');
            i++;
        }
        else
        {
            int val1 = stk[top];
            pop();
            int val2 = stk[top];
            pop();
            switch (exp[i])
            {
            case '+':
                push((val2 + val1));
                break;
            case '-':
                push((val2 - val1));
                break;
            case '*':
                push((val2 * val1));
                break;
            case '/':push((val1)/(val2));break;
                case '^':push(pow(val2,val1));
                    i++;
                    break;
            }
        }
    }
    return stk[top];
}

int main(){
    string exp;
    cout<<"Enter the expression: ";cin>>exp;
    cout<<evaluatePostfix(exp)<<endl;
    getline(cin,exp);
    cout<<"Postfix of exp: "<<evaluatePostfix(exp);

}