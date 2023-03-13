#include <iostream>
using namespace std;

void heapify(int angka[], int n, int i)
{
    // mencari largest dari root, left child dan right child
    int terbesar = i;
    int kiri = 2 * i + 1;
    int kanan = 2 * i + 2;

    if (kiri < n && angka[kiri] > angka[terbesar])
    {
        terbesar = kiri;
    }

    if (kanan < n && angka[kanan] > angka[terbesar])
    {
        terbesar = kanan;
    }

    // meneruskan proses swap jika root nya bukan terbesar
    if (terbesar != i)
    {
        swap(angka[i], angka[terbesar]);
        heapify(angka, n, terbesar);
    }
}

// main function buat heap sort
void heapSort(int angka[], int n)
{
    // Buar max heap
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(angka, n, i);
    }

    // Heap sort
    for (int i = n - 1; i >= 0; i--)
    {
        swap(angka[0], angka[i]);

        // heapify elemen root untuk mendapatkan elemen tertinggi di root lagi
        heapify(angka, i, 0);
    }
}

// output array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

// array sebelum di sort
int main()
{
    int angka[] = {1, 12, 9, 5, 6, 10};
    int n = sizeof(angka) / sizeof(angka[0]);

    cout << "Input array" << endl;
    printArray(angka, n);
    cout << endl;

    heapSort(angka, n);

    cout << "Hasil Sesudah Di Sort Adalah " << endl;
    printArray(angka, n);
}