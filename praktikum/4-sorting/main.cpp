#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    int i, j, minIndex, temp;

    for(i = 0; i < n-1; i++)
    {
        minIndex = i;

        for(j = i+1; j < n; j++)
        {
            if(arr[j] > arr[minIndex])
            {
                minIndex = j;
            }
        }

        temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

int main()
{
    int n, i;
    cout << "Masukkan jumlah data yang ingin diurutkan: ";
    cin >> n;
    int arr[n];

    for(i = 0; i < n; i++)
    {
        cout << "Masukkan data ke-" << i+1 << ": ";
        cin >> arr[i];
    }

    selectionSort(arr, n);

    cout << "Data setelah diurutkan: ";
    for(i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}