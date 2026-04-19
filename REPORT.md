# Laporan Programming Assignment 4: Implementasi STL

**Nama:** Sania Vita Dewi  
**NRP:** 5024251049  

---

## 1. Penjelasan Program
Program ini merupakan implementasi OOP untuk menentukan jenis segitiga berdasarkan koordinat 3D (x, y, z). Program ini menggunakan dua kelas utama:
* **Point2D**: Digunakan untuk merepresentasikan titik dalam koordinat 3D serta menangani operasi matematika seperti operator overloading (+, -, *) dan penghitungan jarak Euclidean.
* **Triangle**: Digunakan untuk menyimpan tiga objek `Point2D` dan memiliki logika untuk menentukan apakah segitiga tersebut termasuk **sama sisi**, **sama kaki**, **siku-siku**, atau **sembarang**.

## 2. Implementasi Namespace
Sesuai dengan instruksi pengerjaan, digunakan **namespace custom** bernama `Solution` untuk membungkus kelas `Point2D` dan `Triangle`. Hal ini dilakukan agar kode tetap terorganisir serta menghindari konflik penamaan.

## 3. Hasil Uji Coba (Testing)
Berikut adalah hasil eksekusi program menggunakan file eksekusi `./myapp` dengan beberapa skenario input:

### Skenario 1: Segitiga Siku-siku
* **Input**:
    ```text
    1
    0 0 0
    0 3 0
    4 0 0
    ```
* **Output**: `siku-siku`

### Skenario 2: Segitiga Sama Sisi
* **Input**:
    ```text
    1
    0 0 0
    1 0 0
    0.5 0.866 0
    ```
* **Output**: `sama sisi`

## 4. Eksekusi