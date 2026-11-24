#include <iostream>
#include <limits>
#include <string>
using namespace std;

const int MAKS_BARANG = 100;
string nama[MAKS_BARANG];
long long harga[MAKS_BARANG];
int stok[MAKS_BARANG];
int jumlahBarang = 0;


void tambahBarang() {
    if (jumlahBarang == MAKS_BARANG) {
        cout << "Penyimpanan penuh. Maksimal 100 barang.\n";
        return;
    }

    string namaBaru;
    long long hargaBaru;
    int stokBaru;

    cout << "\n--- TAMBAH BARANG ---\n";
    cout << "Nama barang: ";
    getline(cin >> ws, namaBaru);
    if (!cin) return;

    cout << "Harga satuan (Rp): ";
    cin >> hargaBaru;
    if (!cin) return;

    cout << "Stok: ";
    cin >> stokBaru;
    if (!cin) return;

    if (hargaBaru <= 0 || stokBaru < 0) {
        cout << "Harga harus positif dan stok tidak boleh negatif.\n";
        return;
    }

    nama[jumlahBarang] = namaBaru;
    harga[jumlahBarang] = hargaBaru;
    stok[jumlahBarang] = stokBaru;
    jumlahBarang++;

    cout << "Barang berhasil ditambahkan.\n";
}

void lihatBarang() {
    cout << "\n--- DAFTAR BARANG ---\n";
    if (jumlahBarang == 0) {
        cout << "Belum ada barang.\n";
        return;
    }

    for (int i = 0; i < jumlahBarang; i++) {
        cout << i + 1 << ". " << nama[i]
             << " | Harga: Rp" << harga[i]
             << " | Stok: " << stok[i] << '\n';
    }
    cout << "Jumlah jenis barang: " << jumlahBarang << '\n';
}

void tampilkanMenu() {
    cout << "\n=== PROGRAM KASIR ===\n";
    cout << "1. Tambah barang\n";
    cout << "2. Lihat barang\n";
    cout << "3. Cari barang    (belum tersedia)\n";
    cout << "4. Urutkan barang (belum tersedia)\n";
    cout << "5. Transaksi      (belum tersedia)\n";
    cout << "6. Keluar\n";
    cout << "Pilih menu: ";
}

int main() {
    int pilihan = 0;

    do {
        tampilkanMenu();
        if (cin >> pilihan) {
            if (pilihan == 1) {
                tambahBarang();
            } else if (pilihan == 2) {
                lihatBarang();
            } else if (pilihan >= 3 && pilihan <= 5) {
                cout << "Fitur ini akan dibuat pada tahap berikutnya.\n";
            } else if (pilihan == 6) {
                cout << "Terima kasih. Program selesai.\n";
            } else {
                cout << "Pilihan harus antara 1 sampai 6.\n";
            }
        }

        if (cin.fail()) {
            if (cin.eof()) break;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Input angka tidak valid. Silakan ulangi dari menu.\n";
        }
    } while (pilihan != 6);

    return 0;
}

