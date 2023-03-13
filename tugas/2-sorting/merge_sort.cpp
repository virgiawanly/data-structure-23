#include <iostream>
using namespace std;

// Fungsi untuk menggabungkan dua bagian array
void merge(int data[], int left, int mid, int right)
{
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Buat array sementara
    int L[n1], R[n2];

    // Copy data ke array sementara
    for (i = 0; i < n1; i++)
    {
        L[i] = data[left + i];
    }
    for (j = 0; j < n2; j++)
    {
        R[j] = data[mid + 1 + j];
    }

    // Gabungkan array sementara ke array data
    i = 0;    // Indeks awal array pertama
    j = 0;    // Indeks awal array kedua
    k = left; // Indeks awal array gabungan
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            data[k] = L[i];
            i++;
        }
        else
        {
            data[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy sisa elemen dari array L
    while (i < n1)
    {
        data[k] = L[i];
        i++;
        k++;
    }

    // Copy sisa elemen dari array R
    while (j < n2)
    {
        data[k] = R[j];
        j++;
        k++;
    }
}

// Fungsi untuk membagi array menjadi dua bagian
void mergeSort(int data[], int left, int right)
{
    if (left < right)
    {
        // Temukan titik tengah
        int mid = left + (right - left) / 2;

        // Urutkan bagian pertama dan kedua
        mergeSort(data, left, mid);
        mergeSort(data, mid + 1, right);

        // Gabungkan kedua bagian
        merge(data, left, mid, right);
    }
}

// Fungsi untuk menampilkan array ke console
void printArray(int data[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << data[i] << " ";
    }
    cout << endl;
}

int main()
{
    int data[8] = {2, 6, 10, 5, 3, 1, 4, 8};
    int size = sizeof(data) / sizeof(data[0]);

    // Urutkan data menggunakan algoritma merge sort
    mergeSort(data, 0, size - 1);

    // Tampilkan data yang sudah diurutkan
    printArray(data, size);
}