// NIM : 13521108
// Nama : Michael Leon Putra Widhi
// Tanggal : 9 Februari 2023
// Praktikum 1
// Deskripsi : Memahami cara kerja 4 sekawan dan aktivasi fungsi kelas

#include "Paper.hpp"

int main() {
    Paper a('A');
    Paper b('B');
    Paper c('C');
    Paper d(c);
    a.fold();
    b.fold();
    c.fold();
    c.glue();
    c.setName('X');
    d.fold();
    d.glue();
    
    return 0;
}