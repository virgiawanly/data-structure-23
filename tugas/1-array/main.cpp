#include <iostream>
using namespace std;

int main()
{
    const short int MAX_MAHASISWA = 10;
    string mahasiswa[MAX_MAHASISWA];

    for (int i = 0; i < MAX_MAHASISWA; i++)
    {
        cout << "Masukkan nama mahasiswa ke-" << i + 1 << ": ";
        cin >> mahasiswa[i];
    }

    for (int i = 0; i < MAX_MAHASISWA; i++)
    {
        cout << "Nama mahasiswa ke-" << i + 1 << ": " << mahasiswa[i] << endl;
    }

    return 0;
}