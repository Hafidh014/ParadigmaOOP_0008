#include <iostream>
using namespace std;

class mahasiswa{
    public:
        int nim;
        string nama;
        float nilai;
    void printData(){
        cout << "NIM: " << nim << endl;
        cout << "Nama: " << nama << endl;
        cout << "Nilai: " << nilai << endl;
    }
};

int main(){
    mahasiswa mhs1;
    mhs1.nim = 12345;
    mhs1.nama = "Budi";
    mhs1.nilai = 85.5;

    mhs1.printData();

    return 0;
}