#include <iostream>
#include <vector>

using namespace std;

// int partition(vector<int>& arr, int low, int high) {
//     int pivot = arr[high];
//     int i = low - 1;
//     for (int j = low; j < high; j++) {
//         if (arr[j] < pivot) {
//             i++;
//             swap(arr[i], arr[j]);
//         }
//     }
//     swap(arr[i+1], arr[high]);
//     return i+1;
// }

int partition(int arr[],int low,int high){
    int pivot=arr[low];
    int i=low+1;
    int j=high;
    while (true)
    {
        while (arr[i]<=pivot)
        {
            i++;
        }a
        while (arr[j]>pivot)
        {
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
        else{
            swap(arr[low],arr[j]);
            return j;
        }
    }
    
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi-1);
        quickSort(arr, pi+1, high);
    }
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n-1);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
