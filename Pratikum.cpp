#include <iostream>
#include <string>
using namespace std;

class Kendaraan {
private:
    int id;
    string nama;

public:
    // 1. Constructor tanpa parameter (default)
    Kendaraan() {
        id = 0;
        nama = "Tidak diketahui";
    }

    // 2. Constructor dengan parameter id
    Kendaraan(int iId) {
        id = iId;
        nama = "Tidak diketahui";
    }

    // 3. Constructor dengan parameter nama
    Kendaraan(string iNama) {
        id = 0;
        nama = iNama;
    }

    // 4. Constructor dengan parameter lengkap
    Kendaraan(int iId, string iNama) {
        id = iId;
        nama = iNama;
    }

    // Method untuk menampilkan data
    void tampilkan() {
        cout << "ID Kendaraan   : " << id << endl;
        cout << "Nama Kendaraan : " << nama << endl;
        cout << "-------------------------" << endl;
    }
};

int main() {
    // Membuat objek dengan berbagai constructor
    Kendaraan k1;
    Kendaraan k2(101);
    Kendaraan k3("Motor");
    Kendaraan k4(202, "Mobil");

    // Menampilkan data
    cout << "Data Kendaraan 1:" << endl;
    k1.tampilkan();

    cout << "Data Kendaraan 2:" << endl;
    k2.tampilkan();

    cout << "Data Kendaraan 3:" << endl;
    k3.tampilkan();

    cout << "Data Kendaraan 4:" << endl;
    k4.tampilkan();

    return 0;
}