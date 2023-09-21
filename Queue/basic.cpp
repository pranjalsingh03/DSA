#include <iostream>
using namespace std;

int main()
{
    int queue[20], n = 20, front = 0, rear = -1, val;
    if (rear == n - 1)
    {
        cout << "Queue Overflow";
    }
    else
    {
        if (front == -1)
            front = 0;
        cout << "Insert the element in queue : " << endl;
        for (int i = front + 1; i <= rear; ++i)
        {
            cin >> queue[i];
            queue[rear] = val;
        }
    }
    if (front == -1)
    {
        cout << "\n Queue is empty ";
    }
    else
    {
        cout << "\nThe elements of queue are: \n";
        for (int i = front + 1; i <= rear; ++i)
            cout << " " << queue[i];
    }
}