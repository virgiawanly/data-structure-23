#include <iostream>
#include <string>

using namespace std;

// struktur data KTP
struct KTP
{
    string nik;
    string nama;
    string alamat;
};

// fungsi untuk menambahkan data KTP
void tambahData(KTP data[], int &jml_data)
{
    KTP ktp;

    cout << "Masukkan NIK: ";
    cin >> ktp.nik;

    cout << "Masukkan Nama: ";
    getline(cin >> ws, ktp.nama);

    cout << "Masukkan Alamat: ";
    getline(cin >> ws, ktp.alamat);

    data[jml_data] = ktp;
    jml_data++;

    cout << "Data berhasil ditambahkan!\n";
}

// fungsi untuk menampilkan data KTP
void tampilData(KTP data[], int jml_data)
{
    if (jml_data == 0)
    {
        cout << "Data kosong!\n";
    }
    else
    {
        cout << "Data KTP:\n";
        for (int i = 0; i < jml_data; i++)
        {
            cout << "--------------------------------" << endl;
            cout << "NIK\t: " << data[i].nik << endl;
            cout << "Nama\t: " << data[i].nama << endl;
            cout << "Alamat\t: " << data[i].alamat << endl;
        }
    }
}

// fungsi untuk mencari data KTP berdasarkan NIK
void cariData(KTP data[], int jml_data)
{
    if (jml_data == 0)
    {
        cout << "Data kosong!\n";
    }
    else
    {
        string nik;
        bool ditemukan = false;

        cout << "Masukan NIK yang ingin dicari: ";
        cin >> nik;

        for (int i = 0; i < jml_data; i++)
        {
            if (data[i].nik == nik)
            {
                cout << "--------------------------------" << endl;
                cout << "NIK\t: " << data[i].nik << endl;
                cout << "Nama\t: " << data[i].nama << endl;
                cout << "Alamat\t: " << data[i].alamat << endl;
                break;
            }
        }

        if (!ditemukan)
        {
            cout << "Data tidak ditemukan!\n";
        }
    }
}

// fungsi untuk mengubah data KTP
void ubahData(KTP data[], int jml_data)
{
    if (jml_data == 0)
    {
        cout << "Data kosong!\n";
    }
    else
    {
        string nik;
        bool ditemukan = false;

        cout << "Masukkan NIK yang ingin diubah: ";
        cin >> nik;

        for (int i = 0; i < jml_data; i++)
        {
            if (data[i].nik == nik)
            {
                cout << "Masukkan NIK baru: ";
                getline(cin >> ws, data[i].nik);

                cout << "Masukkan Nama baru: ";
                getline(cin >> ws, data[i].nama);

                cout << "Masukkan Alamat baru: ";
                getline(cin >> ws, data[i].alamat);

                ditemukan = true;
                cout << "Data berhasil diubah!\n";

                break;
            }
        }

        if (!ditemukan)
        {
            cout << "Data tidak ditemukan!\n";
        }
    }
}

// fungsi untuk menghapus data KTP
void hapusData(KTP data[], int &jml_data)
{
    if (jml_data == 0)
    {
        cout << "Data kosong!\n";
    }
    else
    {
        string nik;
        bool ditemukan = false;

        cout << "Masukkan NIK yang ingin dihapus: ";
        cin >> nik;

        for (int i = 0; i < jml_data; i++)
        {
            if (data[i].nik == nik)
            {
                for (int j = i; j < jml_data - 1; j++)
                {
                    data[j] = data[j + 1];
                }
                jml_data--;
                ditemukan = true;
                cout << "Data berhasil dihapus!\n";
                break;
            }
        }

        if (!ditemukan)
        {
            cout << "Data tidak ditemukan!\n";
        }
    }
}

int main()
{
    int MAX;
    KTP data[MAX];
    int jml_data = 0;
    int pilihan;

    do
    {
        cout << "Menu:\n";
        cout << "1. Tambah Data\n";
        cout << "2. Tampil Data\n";
        cout << "3. Cari NIK\n";
        cout << "4. Ubah Data\n";
        cout << "5. Hapus Data\n";
        cout << "6. Keluar\n";
        cout << "Pilih menu (1-5): ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            tambahData(data, jml_data);
            break;
        case 2:
            tampilData(data, jml_data);
            break;
        case 3:
            cariData(data, jml_data);
            break;
        case 4:
            ubahData(data, jml_data);
            break;
        case 5:
            hapusData(data, jml_data);
            break;
        case 6:
            cout << "Program selesai. Terima kasih!\n";
            break;
        default:
            cout << "Pilihan tidak valid!\n";
            break;
        }

        cout << endl;

    } while (pilihan != 6);

    return 0;
}