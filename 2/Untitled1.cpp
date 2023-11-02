#include <iostream>
using namespace std;
main(){
	//Variabel
	string nam1,nam2,nam3;
	string bar1,bar2,bar3;	
	int har1,har2,har3;
	int total;
	
	//barang
	cout << "Nama Pelanggan  : "; cin >> nam1;
	cout << "Nama Barang  : "; cin >> bar1;
	cout << "Harga Barang  : "; cin >> har1;
	
	cout << "\n\n";
	cout << "Hasil 1" << endl;
	cout << "Nama Pelanggan  : " << nam1 << endl;
	cout << "Nama Barang  : " << bar1 << endl;
	cout << "Harga Barang  : " << har1 << endl;

	cout << "\n\n";
	cout << "Nama Pelanggan  : "; cin >> nam2;
	cout << "Nama Barang  : "; cin >> bar2;
	cout << "Harga Barang  : "; cin >> har2;
	
	cout << "\n\n";
	cout << "Hasil 2" << endl;
	cout << "Nama Pelanggan  : " << nam2 << endl;
	cout << "Nama Barang  : " << bar2 << endl;
	cout << "Harga Barang  : " << har2 << endl;

	cout << "\n\n";
	cout << "Nama Pelanggan  : "; cin >> nam3;
	cout << "Nama Barang  : "; cin >> bar3;
	cout << "Harga Barang  : "; cin >> har3;
	
	cout << "\n\n";
	cout << "Hasil 3" << endl;
	cout << "Nama Pelanggan  : " << nam3 << endl;
	cout << "Nama Barang  : " << bar3 << endl;
	cout << "Harga Barang  : " << har3 << endl;
	
	cout << "\n\n";	
	total = har1 + har2 + har3;
	cout << "Total 3 Barang : Rp " << total << endl;
}


