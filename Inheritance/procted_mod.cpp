#include <iostream>
#include <string.h>
using namespace std;

class Student
{
private:
    int roll;

protected:
    char section[20];

public:
    void getdata()
    {
        cout << "Enter roll no.";
        cin >> roll;
    }
    void showdata()
    {
        cout << "Roll no. is " << roll << endl;
    }
};

class Result : protected Student
{
private:
    float fees;

public:
    void getdata()
    {
        Student::getdata();
        cout << "Enter fees" << endl;
        cin >> fees;
        cout << "Enter section " << endl;
        cin >> section;
    }
    void showdata()
    {
        Student::showdata();
        cout << "Fees is " << fees << endl;
        cout << "Section is " << section << endl;
    }
};

int main()
{
    Result r1;
    r1.getdata();
    r1.showdata();
    return 0;
}