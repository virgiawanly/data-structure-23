#include <iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int LeftArr[n1], RightArr[n2];
    
    for (int i = 0; i < n1; i++)
        LeftArr[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        RightArr[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (LeftArr[i] <= RightArr[j]) {
            arr[k] = LeftArr[i];
            i++;
        }
        else {
            arr[k] = RightArr[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = LeftArr[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = RightArr[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

int main() {
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array awal:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    mergeSort(arr, 0, n - 1);

    cout << "Array yang telah diurutkan:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}