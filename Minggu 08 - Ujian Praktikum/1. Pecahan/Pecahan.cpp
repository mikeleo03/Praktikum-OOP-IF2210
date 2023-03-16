#include "Pecahan.hpp"
#include <iostream>
using namespace std;

// ctor: set n = 0 dan d = 1
pecahan::pecahan() {
    this->n = 0;
    this->d = 1;
}

// ctor: set n = _n dan d = _d
pecahan::pecahan(int _n, int _d) {
    this->n = _n;
    this->d = _d;
}

pecahan::pecahan(const pecahan &P) {
    this->n = P.n;
    this->d = P.d;
}

pecahan::~pecahan() {}

int pecahan::getPemb()
// Menghasillkan pembilang n
{
    return this->n;
}

int pecahan::getPeny()
// Menghasilkan penyebut d
{
    return this->d;
}

void pecahan::setPemb(int _n)
// Mengubah nilai n menjadi _n
{
    this->n = _n;
}

void pecahan::setPeny(int _d)
// Mengubah nilai d menjadi _d
{
    this->d = _d;
}

pecahan pecahan::operator+(const pecahan &P)
// Menambahkan pecahan dengan P
// Rumus = n1/d1 + n2/d2 = (n1*d2 + n2*d1)/d1*d2
{
    pecahan hasil;
    hasil.n = this->n * P.d + P.n * this->d;
    hasil.d = this->d * P.d;
    return hasil;
}

pecahan pecahan::operator-(const pecahan &P)
// Menambahkan pecahan dengan P
// Rumus = n1/d1 - n2/d2 = (n1*d2 - n2*d1)/d1*d2
{
    pecahan hasil;
    hasil.n = this->n * P.d - P.n * this->d;
    hasil.d = this->d * P.d;
    return hasil; 
}

pecahan pecahan::operator*(int x)
// Mengalikan pembilang P dengan x dan penyebut P dengan x
// Syarat: x > 0
// Rumus = n1/d1 = (n1*x)/(d1*x)
{
    pecahan hasil;
    hasil.n = this->n * x;
    hasil.d = this->d * x;
    return hasil;
}

bool pecahan::operator==(const pecahan &P)
// Mengecek apakah kedua pecahan memiliki nilai yang sama
// Hint: bandingkan dengan gcd, tidak boleh dibandingkan dengan RealP()!
{
    float nilaibanding = P.n / this->n;
    if (this->d * nilaibanding == P.d) {
        return true;
    } else {
        return false;
    }
}

float pecahan::RealP()
// Menghasilkan bentuk desimal dari pecahan
{
    return float(this->n) / float(this->d);
}

void pecahan::Print()
// Mencetak pecahan dalam format: n/d (tanpa tambahan karakter apa pun
// di depan, tengah, atau belakang)
{
    cout << this->n << "/" << this->d;
}