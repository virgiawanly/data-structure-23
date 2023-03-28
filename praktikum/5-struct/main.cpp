#include <iostream>
#include <cstdio>
using namespace std;

const int MAX_DATA = 100;

struct Orang
{
    string nama;
    float tinggi;
    int umur;
    string golDarah;
};

void inputData(Orang data[], int &lastIdx)
{
    Orang newData;

    cout << "Masukkan nama: ";
    cin.ignore();
    getline(cin, newData.nama);

    cout << "Masukkan tinggi badan (cm): ";
    cin >> newData.tinggi;

    cout << "Masukkan umur: ";
    cin >> newData.umur;

    cout << "Masukkan golongan darah: ";
    cin.ignore();
    getline(cin, newData.golDarah);

    data[lastIdx] = newData;
    lastIdx++;

    cout << endl;
    cout << "Data berhasil diinput." << endl;
}

void showData(Orang data[], int lastIdx)
{
    for (int i = 0; i < lastIdx; i++)
    {
        cout << "Data " << i + 1 << endl;
        cout << "Nama\t\t: " << data[i].nama << endl;
        cout << "Tinggi Badan\t: " << data[i].tinggi << " cm" << endl;
        cout << "Umur\t\t: " << data[i].umur << " tahun" << endl;
        cout << "Golongan Darah\t: " << data[i].golDarah << endl;
        cout << endl;
    }
}

int main()
{
    Orang data[MAX_DATA];
    bool isRunning = true;
    int lastIdx = 0;
    int choice = 1;

    while (isRunning)
    {
        cout << endl;
        cout << "Program Input Data" << endl;
        cout << "1) Input Data" << endl;
        cout << "2) Tampil Data" << endl;
        cout << "0) Keluar" << endl;
        cout << "Pilihan anda\t: ";

        cin >> choice;

        switch (choice)
        {
        case 0:
            isRunning = false;
            break;
        case 1:
            inputData(data, lastIdx);
            break;
        case 2:
            showData(data, lastIdx);
            break;
        default:
            cout << "Pilihan tidak sesuai :( silahkan coba lagi" << endl;
        }
    }
}