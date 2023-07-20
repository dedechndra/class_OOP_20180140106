#include <iostream>
using namespace std;

class Mahasiswa {

private:
	int nim;
	string nama;
public:
	void inputdata() {
		cout << "Masukkan NIM : ";
		cin >> nim;
		cout << "Masukkan Nama : ";
		cin >> nama;
	}
	void tampildata() {
		cout << "\nNIM : " << nim << endl;
		cout << "Nama : " << nama << endl;
	}
};
class Matakuliah {
private:
	string kode;
	string namamk;
	int sks;

public:
	void InputMK();
	void TampilMK();

};
void Matakuliah::InputMK() {
	cout << "\nMasukkan kode Mata Kuliah : ";
	cin >> kode;
	cout << "Masukkan Nama Mata Kuliah : ";
	cin >> namamk;
	cout << "Memasukkan Sks Mata Kuliah : ";
	cin >> sks;
}

void Matakuliah::TampilMK() {
	cout << "\nKode : " << kode << endl;
	cout << "Nama MataKuliah : " << namamk << endl;
	cout << "Jumlah SKS : " << sks << endl;
}

