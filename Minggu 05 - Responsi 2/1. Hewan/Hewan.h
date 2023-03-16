#include <iostream>
using namespace std;

class Hewan {
	public:
		Hewan(string namahewan) {
            this->name = namahewan;
        }
        ~Hewan() {
            cout << "Hewan mati " << this->name << endl;
        }
        virtual void print() {
            cout << "Hewan ini namanya " << this->name << endl;
        }
	protected:
		string name;
};

class Anjing : public Hewan {
	public:
		Anjing(string namahewan) : Hewan(namahewan) {
        }
        ~Anjing() {
            cout << "Anjing mati " << this->name << endl;
        }
        void print() {
            cout << "Anjing ini namanya " << this->name << endl;
        }
};

class Kucing : public Hewan {
	public:
		Kucing(string namahewan) : Hewan(namahewan) {
        }
        virtual ~Kucing() {
            cout << "Kucing mati " << this->name << endl;
        }
};

class AnjingBulldog : public Anjing {
	public:
		AnjingBulldog(string namahewan, string milik) : Anjing(namahewan) {
            this->pemilik = milik;
        }
		~AnjingBulldog() {
            cout << "Anjing bulldog mati " << this->name << endl;
        }
        void print() {
            cout << "Anjing bulldog ini namanya " << this->name << ". Pemiliknya adalah " << this->pemilik << endl;
        }
	private:
		string pemilik;
};

class KucingAnggora : public Kucing {
	public:
		KucingAnggora(string namahewan, string milik) : Kucing(namahewan) {
            this->pemilik = milik;
        }
		~KucingAnggora() {
            cout << "Kucing anggora mati " << this->name << endl;
        }
        void print() {
            cout << "Kucing anggora ini namanya " << this->name << ". Pemiliknya adalah " << this->pemilik << endl;
        }
	private:
		string pemilik;
};