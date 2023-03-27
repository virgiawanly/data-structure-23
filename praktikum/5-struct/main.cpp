#include <iostream>
#include <cstdio>
using namespace std;

struct Orang
{
    string nama;
    float tinggi;
    int umur;
    string golDarah;
};

int main()
{
    Orang data;
    bool isRunning = true;

    while (isRunning)
    {
        int choice;

        cout << endl;
        cout << "Program Input Data" << endl;
        cout << "1) Input Data" << endl;
        cout << "0) Keluar" << endl;
        cout << "Pilihan anda\t: ";

        cin >> choice;

        switch (choice)
        {
        case 0:
            isRunning = false;
            break;
        case 1:
            cout << "Masukkan nama: ";
            cin.ignore();
            getline(cin, data.nama);

            cout << "Masukkan tinggi badan (cm): ";
            cin >> data.tinggi;

            cout << "Masukkan umur: ";
            cin >> data.umur;

            cout << "Masukkan golongan darah: ";
            cin.ignore();
            getline(cin, data.golDarah);

            cout << endl;
            cout << "Data berhasil diinput." << endl;
            cout << endl;

            cout << "Nama: " << data.nama << endl;
            cout << "Tinggi Badan: " << data.tinggi << " cm" << endl;
            cout << "Umur: " << data.umur << " tahun" << endl;
            cout << "Golongan Darah: " << data.golDarah << endl;
            break;
        default:
            cout << "Pilihan tidak sesuai :( silahkan coba lagi" << endl;
        }
    }
}