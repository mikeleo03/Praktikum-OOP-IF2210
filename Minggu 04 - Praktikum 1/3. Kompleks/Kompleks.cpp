// NIM : 13521108
// Nama : Michael Leon Putra Widhi
// Tanggal : 9 Februari 2023
// Praktikum 1
// Deskripsi : Implementasi Kelas Kompleks sesuai spesifikasi

#include <iostream>
#include "Kompleks.h"

using namespace std;

int Kompleks::n_kompleks = 0;

// ctor tanpa parameter
// inisialisasi seluruh koefisien dengan nilai 0
Kompleks::Kompleks() {
	this->real = 0;
	this->imaginer = 0;
	Kompleks::n_kompleks++;
}

// ctor dengan parameter
Kompleks::Kompleks(int real, int imaginer) {
	this->real = real;
	this->imaginer = imaginer;
	Kompleks::n_kompleks++;
}

//mengembalikan bagian riil
int Kompleks::GetReal() const {
	return this->real;
}

// mengembalikan bagian imaginer
int Kompleks::GetImaginer() const {
	return this->imaginer;
}

// mengisi bagian riil
void Kompleks::SetReal(int real) {
	this->real = real;
}

// mengisi bagian imaginer
void Kompleks::SetImaginer(int imaginer) {
	this->imaginer = imaginer;
}

// operator overloading

// operator+ untuk melakukan penjumlahan dengan rumus berikut
// (a + bi) + (c + di) = (a+c) + (b+d)i
Kompleks operator+ (const Kompleks& p, const Kompleks& q) {
	Kompleks r;
	r.real = p.real + q.real;
	r.imaginer = p.imaginer + q.imaginer;
	return r;
}

// operator- untuk melakukan pengurangan dengan rumus berikut
// (a + bi) − (c + di) = (a−c) + (b−d)i
Kompleks operator- (const Kompleks& p, const Kompleks& q) {
	Kompleks r;
	r.real = p.real - q.real;
	r.imaginer = p.imaginer - q.imaginer;
	return r;
}

// operator* untuk melakukan perkalian dengan rumus berikut
// (a + bi)(c + di) = ac + bci + adi + bd i^2 = (ac−bd) + (bc+ad)i
Kompleks operator* (const Kompleks& p, const Kompleks& q) {
	Kompleks r;
	r.real = p.real * q.real - p.imaginer * q.imaginer;
	r.imaginer = p.imaginer * q.real + p.real * q.imaginer;
	return r;
}

// operator* untuk mengkalikan bilangan kompleks dengan konstanta
// (a + bi)(c) = (ac) + (bc)i
Kompleks operator* (const Kompleks& p, const int q) {
	Kompleks r;
	r.real = p.real * q;
	r.imaginer = p.imaginer * q;
	return r;
}

// operator* untuk mengkalikan bilangan kompleks dengan konstanta (sifat komutatif)
Kompleks operator* (const int q, const Kompleks& p) {
	return p * q;
}

// mengembalikan jumlah instance yang pernah dibuat
int Kompleks::CountKompleksInstance() {
	return Kompleks::n_kompleks;
}

// mencetak bilangan kompleks ke layar, diakhiri dengan end-of-line 
// contoh:
// 3+5i
// 0+0i
// -5-4i
void Kompleks::Print() {
	if (this->imaginer > 0) {
		cout << this->real << "+" << this->imaginer << "i" << endl;
	} else {
		cout << this->real << this->imaginer << "i" << endl;
	}
}
