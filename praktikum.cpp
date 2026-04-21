#include <iostream>
using namespace std;

class Barang {
public:
    string nama;
    int jumlah;
    string kategori;
    string tanggalProduksi;


    void tampilkanData() {
        cout << "Nama Barang       : " << nama << endl;
        cout << "Jumlah            : " << jumlah << endl;
        cout << "Kategori          : " << kategori << endl;
        cout << "Tanggal Produksi  : " << tanggalProduksi << endl;
    }
};

int main() {
    Barang elektronik;
    elektronik.nama = "Laptop";
    elektronik.jumlah = 15;
    elektronik.kategori = "Elektronik";
    elektronik.tanggalProduksi = "2060-01-10";

    Barang nonElektronik;
    nonElektronik.nama = "Meja";
    nonElektronik.jumlah = 30;
    nonElektronik.kategori = "Non Elektronik";
    nonElektronik.tanggalProduksi = "2050-12-01";


    cout << "Data Barang Elektronik:\n";
    elektronik.tampilkanData();

    cout << "\nData Barang Non Elektronik:\n";
    nonElektronik.tampilkanData();

    return 0;
}