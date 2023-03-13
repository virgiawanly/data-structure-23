#include <iostream>

using namespace std;

int partition(int arr[], int start, int end)
{
    int pivot = arr[start];
    int count = 0;

    for (int i = start + 1; i <= end; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }

    // Memindahkan elemen pivot ke posisi yang benar
    int pivotIndex = start + count;

    swap(arr[pivotIndex], arr[start]);

    // Mengurutkan bagian kiri dan kanan dari elemen pivot
    int i = start, j = end;

    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

void quickSort(int arr[], int start, int end)
{
    // Cek apakah array hanya memiliki 1 elemen
    // Jika ya, maka tidak perlu diurutkan
    if (start >= end)
    {
        return;
    }

    // Membuat partisi array
    int p = partition(arr, start, end);

    // Mengurutkan bagian kiri
    quickSort(arr, start, p - 1);

    // Mengurutkan bagian kanan
    quickSort(arr, p + 1, end);
}

int main()
{
    // Data array yang akan diurutkan
    int arr[] = {9, 3, 4, 2, 1, 8};
    int n = 6;

    // Mengurutkan array
    quickSort(arr, 0, n - 1);

    // Menampilkan hasil
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}