#include <iostream>
using namespace std;

void mergesort(int a[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = low + (high - low) / 2;
        mergesort(a, low, mid);
        mergesort(a, mid + 1, high);
        merge(a, low, mid, high);
    }
}

void merge(int a[], int beg, int mid, int last)
{
    int lindex, tempindex, rindex, temp[n] lindex = beg;
    rindex = mid + 1 tempindex = beg;
    while ((lindex <= mid) && (rindex <= last))
    {
        if (a[lindex] < a[rindex])
        {
            temp[tempindex] = a[lindex];
            lindex = lindex + 1;
        }
        else
        {
            temp[tempindex] = a[rindex];
            rindex = rindex + 1;
        }
        tempindex = tempindex + 1;
    }
    while (lindex <= mid)
    {
        temp[tempindex++] = a[lindex++];
    }
    while (rindex <= last)
    {
        temp[tempindex++] = a[rindex++];
    }
    for (int i = beg; i <= last; i++)
    {
        a[i] = temp[i];
    }
}

void display(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int a, b, n, arr[n];
    cout << "Enter the number of elements ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin << arr[i];
    }
    cout << "\nOriginal array: ";
    display(a, n);
    cout << endl;
    mergesort(a, 0, n - 1);
    cout << "\nSorted array: ";
    display(a, n);
    cout << endl;
}
