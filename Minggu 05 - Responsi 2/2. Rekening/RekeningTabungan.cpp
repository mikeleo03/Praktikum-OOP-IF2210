#include <iostream>
#include "RekeningTabungan.h"
#include "Rekening.h"
using namespace std;

// Konstruktor menginisialisi saldo (parameter 1) dan biaya transaksi (parameter 2)
// Set biaya transaksi 0.0 apabila biaya transaksi bernilai negatif
RekeningTabungan::RekeningTabungan(double saldo, double biayaTransaksi) : Rekening(saldo) {
	this->biayaTransaksi = biayaTransaksi;
}

// Getter, Setter
void RekeningTabungan::setBiayaTransaksi(double biayaTransaksi) {
	this->biayaTransaksi = biayaTransaksi;
}
double RekeningTabungan::getBiayaTransaksi() const {
	return this->biayaTransaksi;
}

// Member Function
// Panggil fungsi simpanUang dari parent class
// Kurangkan saldo dengan biaya transaksi
void RekeningTabungan::simpanUang(double tambahSaldo) {
    tambahSaldo -= this->biayaTransaksi;
	Rekening::simpanUang(tambahSaldo);
}

// Panggil fungsi tarikUang dari parent class
// Kurangkan saldo dengan biaya transaksi hanya jika penarikan uang berhasil
// Saldo mungkin saja menjadi negatif apabila setelah penarikan, saldo < biaya transaksi
// Kembalikan boolean yang mengindikasikan apakah uang berhasil ditarik atau tidak
bool RekeningTabungan::tarikUang(double tambahSaldo) {
	if (Rekening::getSaldo() < tambahSaldo) {
		return false;
	} else {
		tambahSaldo += this->biayaTransaksi;
		Rekening::setSaldo(Rekening::getSaldo() - tambahSaldo);
		return true;
	}
}