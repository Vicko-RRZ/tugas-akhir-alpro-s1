# Sistem Kasir

Program aplikasi kasir yang menggunakan bahasa **C++** untuk membantu pengelolaan katalog menu, stok, pencarian, pengurutan harga, serta pencatatan transaksi dan struk pembayaran di sebuah kafe. Program ini disusun sebagai tugas akhir mata kuliah Algoritma dan Pemrograman.

## Fitur Utama
- **Lihat Daftar Menu:** Menampilkan katalog menu (ID, nama, kategori, harga, stok, dan info promo) dalam format tabel rapi.
- **Tambah Menu Baru:** Menambahkan menu baru secara dinamis. Apabila kapasitas array penuh, misal kapasitas dikali 2 (`kapasitas * 2`).
- **Cari Menu:** Mencari menu berdasarkan kata kunci nama menggunakan **Linear Search** (atau **Binary Search** jika data sudah diurutkan).
- **Urutkan Menu:** Mengurutkan menu berdasarkan harga (dari termurah ke termahal) menggunakan **Bubble Sort** dengan atau **Selection Sort**.
- **Buat Pesanan / Transaksi Kasir:** Mencari menu berdasarkan ID, memvalidasi stok, menghitung subtotal pesanan, mengurangi stok via pointer, dan mencetak struk.
- **Keluar & Bersihkan Memori:** Mengakhiri perulangan menu utama dan membebaskan memori array dinamis (`delete[]`) sebelum program selesai.

## Penerapan Materi Algoritma & Pemrograman
- **Tipe Data Dasar & Standar:** `int`, `long long`, `const` dan `string` untuk jumlah dan stok barang, harga, jumlah beli, status promo/pencarian, serta nama menu/kata kunci.
- **Tipe Data Bentukan:**
  - **Enum** (`MAKANAN`, `MINUMAN`) untuk klasifikasi menu.
  - **Union** (`infoDiskon`, `kodePromo`) untuk menyimpan jenis promo secara hemat memori.
  - **Struct** untuk membungkus atribut tiap item menu.
- **Pointer & Array Dinamis:** Alokasi di heap (`new Menu[kapasitas]`), perluasan kapasitas otomatis (`kapasitas * 2`), manipulasi/swap/update stok lewat pointer, dan dealokasi (`delete[]`).
- **Kontrol Alur & Modularisasi:** Perulangan `do-while` dan `for`, percabangan `if-else`, dan pemecahan tugas ke fungsi/modul terpisah.
- **Algoritma Pencarian & Pengurutan:** **Linear Search** (pencarian kata kunci nama menu) dan **Bubble Sort** (pengurutan harga).
