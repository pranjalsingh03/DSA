*#include<iostream> using namespace std;

class Student
{
protected:
    int roll_no;

public:
    void set_roll_no(int r)
    {
        roll_no = r;
    }
};

class Test : virtual public Student
{
protected:
    float sub1;
    float sub2;

public:
    void set_marks(float s1, float s2)
    {
        sub1 = s1;
        sub2 = s2;
        /
    }
};

class Sports : virtual public Student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
};

class Result : public Test, public Sports
{
    float total;

public:
    void display()
    {
        total = sub1 + sub2 + score;
        cout << "Roll No: " << roll_no << endl;
        cout << "Total Score: " << total << endl;
    }
};

int main()
{
    Result r;
    int roll_no;
    float sub1, sub2, score;

    cout << "Enter Roll No: ";
    cin >> roll_no;
    r.set_roll_no(roll_no);

    cout << "Enter marks for Subject 1: ";
    cin >> sub1;

    cout << "Enter marks for Subject 2: ";
    cin >> sub2;

    r.set_marks(sub1, sub2);

    cout << "Enter score for Sports: ";
    cin >> score;

    r.set_score(score);

    r.display();

    return 0;
}
