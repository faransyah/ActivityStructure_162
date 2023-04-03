#include <iostream>

using namespace std;


struct AlamatDetail
{
	string desa;
	string kota;

};

struct Mahasiswa {
	string nim;
	string nama;
	AlamatDetail alamat;
	int umur;
};

int main() {

	Mahasiswa mhs;
	
	cout << "Masukkan nim: ";
	cin >> mhs.nim;
	cout << "Masukkan nama ";
	cin >> mhs.nama;
	cout << "Alamat: " << endl;
	cout << "\tNama desa : ";
	cin >> mhs.alamat.desa;
	cout << "\tNama Kota : ";
	cin >> mhs.alamat.kota;
	cout << "Masukkan umur: ";
	cin >> mhs.umur;

	cout << "\nNim : " << mhs.nim;
	cout << "\nnama : " << mhs.nama;
	cout << "\ndesa : " << mhs.alamat.desa;
	cout << "\nkota : " << mhs.alamat.kota;
}
