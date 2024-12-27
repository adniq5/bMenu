#include <iostream>
#include <cstdlib>  // Untuk system("cls")
#include <conio.h>  // Untuk getch()
using namespace std;

// Struktur Data Mahasiswa
struct Mahasiswa {
    string nim;
    string nama;
    string alamat;
    string tanggalLahir; // Format DD/MM/YYYY
    float ipk;
};

// Fungsi untuk menampilkan menu
void tampilkanMenu() {
    system("cls");
    cout << "\n=== Menu Aplikasi Data Mahasiswa ===\n";
    cout << "1. Masukkan Data Mahasiswa\n";
    cout << "2. Tampilkan Data Mahasiswa\n";
    cout << "3. Update Data Mahasiswa\n";
    cout << "4. Hapus Data Mahasiswa\n";
    cout << "5. Exit\n";
    cout << "Masukkan pilihan: ";
}

int main() {
    char pilihan;
    do {
        tampilkanMenu();
        pilihan = getch(); // Mengambil input dari pengguna
        // Menangani pilihan menu
        switch (pilihan) {
            case '1':
                // Tambah data
                break;
            case '2':
                // Tampilkan data
                break;
            case '3':
                // Update data
                break;
            case '4':
                // Hapus data
                break;
            case '5':
                cout << "\nTerima kasih telah menggunakan program ini.\n";
                break;
            default:
                cout << "\nPilihan tidak valid. Coba lagi.\n";
                break;
        }
    } while (pilihan != '5');
    return 0;
}
