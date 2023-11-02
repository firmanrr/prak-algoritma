#include <iostream>
using namespace std;
int main(){

	float luas_62,a_62,b_62,tinggi_62;
	int pilihan_62;
	int kel_62,AB_62,BC_62,CD_62,DA_62;

	cout << "=====================================" << endl;
	cout << "|      Bangun datar Trapesium       |" << endl;
	cout << "|===================================|" << endl;
	cout << "|               Pilihan             |" << endl;
	cout << "|                                   |\n"; 
	cout << "| 1. Menghitung Luas Trapesium      |" << endl;
	cout << "| 2. Menghitung Keliliing Trapesium |" << endl;
	cout << "| 3. Menghitung Tinggi Trapesium    |" << endl;
	cout << "=====================================" << endl;
	cout << "\n"; 
	cout << "Masukkan pilihan (1/2/3) :"; cin >> pilihan_62;
	
	switch(pilihan_62) {
	case 1 :
		cout << "\n=== Menghitung Luas Trapesium ===" << endl;
		cout << "Masukkan Nilai a : "; cin >> a_62;
		cout << "Masukkan Nilai b : "; cin >> b_62;
		cout << "Masukkan Nilai t : "; cin >> tinggi_62;
		luas_62 = 0.5 * (a_62 + b_62) * tinggi_62;
		cout << "Luas Trapesiumnya adalah = " << luas_62 << endl;
		cout << "\n";
		break;
	case 2 :
		cout << "\n=== Menghitung Keliling Trapesium ===" << endl;
		cout << "Panjang sisi AB : "; cin >> AB_62;
		cout << "Panjang sisi BC : "; cin >> BC_62;
		cout << "Panjang sisi CD : "; cin >> CD_62;
		cout << "Panjang sisi DA : "; cin >> DA_62;
		kel_62 = AB_62 + BC_62 + CD_62 + DA_62;
		cout << "Keliling Trapesiumnya adalah = " << kel_62 << endl;
		cout << "\n";
		break;
	case 3 :
		cout << "\n=== Menghitung Tinggi Trapesium ===" << endl;
		cout << "Masukkan Nilai Luas Trapesium : "; cin >> luas_62;
		cout << "Masukkan Nilai a : "; cin >> a_62;
		cout << "Masukkan Nilai b : "; cin >> b_62;
		tinggi_62 = (2 * luas_62) / (a_62 + b_62);
		cout << "Tinggi Trapesiumnya adalah = " << tinggi_62 << endl;
		cout << "\n";
		break;	
	default :
  	printf("Input angka pilihan dengan benar!\n");
	  printf("Tekan enter untuk memilih lagi!"); 
		cin.ignore(); 
		cin.get();
		main();	
	}
	
	printf("Tekan enter untuk memilih lagi!");cin.ignore(); cin.get();
	main();
}
