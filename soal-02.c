/** EL2208 Praktikum Pemecahan Masalah dengan C 2020/2021
*   Modul               : 6
*   Soal                : 2
*   Hari dan Tanggal    : Senin, 29 Maret 2021
*   Nama (NIM)          : 
*   Asisten (NIM)       : 
*   Nama File           : soal-02.c
*   Deskripsi           : Deskripsi file ini.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Tulis kode anda di sini
    
    printf("Nama teman baik ('-' bila sudah selesai): ");
    printf("Tidak memiliki teman baik");
    printf("%s ", nama);
    
    printf("Nama siswa 1: ");
    printf("Masukkan nama-nama teman baik %s (berdasar kedekatan) \n\n", nama_siswa_1);
    printf("\n");
    printf("Nama siswa 2: ");
    printf("Masukkan nama-nama teman baik %s (berdasar kedekatan) \n\n", nama_siswa_2);
    
    printf("\n");
    printf("Teman baik %s: \n", nama_siswa_1);
    
    printf("\n\n");
    printf("Teman baik %s: \n", nama_siswa_2);
    
    printf("\n\n");
    
    printf("%s dan %s sama-sama berteman dengan : %s\n", nama_siswa_1, nama_siswa_2, nama_teman);
    printf("Ditemukan di indeks kedekatan : %d dari teman baik %s dan %d dari teman baik %s \n", indeks_1, nama_siswa_1, indeks_2, nama_siswa_2);
    printf("\n");
    
    printf("Tidak ditemukan teman baik yang sama\n");
    
    return 0;
}
