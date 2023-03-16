// NIM : 13521108
// Nama : Michael Leon Putra Widhi
// Tanggal : 9 Februari 2023
// Praktikum 1
// Deskripsi : Implementasi Kelas BunchOfKeys sesuai spesifikasi

#include <iostream>
#include "BunchOfKeys.hpp"
using namespace std;

// ctor
BunchOfKeys::BunchOfKeys() {
	this->n_keys = 0;
}

// member function
void BunchOfKeys::add() {
	this->n_keys++;
}

void BunchOfKeys::shake() {
	if (n_keys > 1) {
		for (int i = 0; i < this->n_keys; i++) {
			cout << "krincing" << endl;
		}
	} else {
		cout << "Tidak terjadi apa-apa" << endl;
	}
}
