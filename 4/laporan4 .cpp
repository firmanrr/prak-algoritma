#include <iostream>
using namespace std;
int main(){
	
	int x = 0;
	int digit_62;
	char kelas_62;
	string nama_62[2];
	string noreg_62[2];
	string bahasa_62,hasil_62;
	int nilai_62[2];

	cout << "=============================="<< endl;
	cout << "=  Kelas Bahasa Pemrograman  ="<< endl;
	cout << "=  1. Basic (B)              ="<< endl;
	cout << "=  2. Pascal (P)             ="<< endl; 
	cout << "=  3. C++ (C)                ="<< endl; 
	cout << "=============================="<< endl;
	cout << "Pilihan (A / B / C): ";
	cin  >> kelas_62;
	cout << endl;
	kelas_62 = toupper(kelas_62);
	if(kelas_62 == 'B'){
		bahasa_62 = "Kelas Bahasa Basic";
		hasil_62  = "Nilai Tertinggi Di Kelas Basic adalah :  ";
	}
	else if(kelas_62 == 'P'){
		bahasa_62 = "Kelas Bahasa Pascal";
		hasil_62  = "Nilai Tertinggi Di kelas Pascal adalah : ";
	}
	else if(kelas_62 == 'C'){
		bahasa_62 = "Kelas Bahasa C++";
		hasil_62  = "Nilai Tertinggi Di kelas C++ adalah : ";
	}

	cout << bahasa_62 << endl;
	cout << endl;
	cout << "--Peserta 1--" << endl;
	cout << "Nama Peserta\t : ";
	cin  >> nama_62[x];
	cout << "Nomor Registrasi : ";
	
	//Jika melebihi 6 digit angka registrasi
	cin >> noreg_62[x];
	digit_62 = noreg_62[x].size();

		if(!(digit_62 <= 6)){
			cout << "Nomor Registrasi Maximal 6 digit" << endl;
			system("pause"); main();
		}

	cout << "Nilai Ujian\t : ";
	cin  >> nilai_62[x];
		if(!(nilai_62[x] >= 0 and nilai_62[x] <= 100)){
		cout << "Nilai hanya terdiri dari 0 - 100" << endl;
			system("pause"); main();	
		}
	cout << "\n";
	x++;
	cout << "--Peserta 2--" << endl;
	cout << "Nama Peserta\t : ";
	cin  >> nama_62[x];
	cout << "Nomor Registrasi : ";
	cin  >> noreg_62[x];
	
	//Jika melebihi 6 digit angka registrasi
	digit_62 = noreg_62[x].size();
	if(!(digit_62 <= 6))
		{
			cout << "Nomor Registrasi Maximal 6 digit" << endl;
			system("pause"); main();
		}
	cout << "Nilai Ujian\t : ";
	cin >> nilai_62[x];
		if(!(nilai_62[x] >= 0 and nilai_62[x] <= 100)){
		cout << "Nilai hanya terdiri dari 0 - 100" << endl;
			system("pause"); main();	
		}

	x = 0;
	cout << "\n";
	cout << "Data Peserta" << endl << endl;
	cout << "Peserta 1 :" << endl;
	cout << "Nama Peserta \t: " << nama_62[x] << endl;
	cout << "Nomor Registrasi: " << noreg_62[x] << endl;
	cout << "Nilai Ujian  \t: " << nilai_62[x] << endl;
	cout << endl;
	x++;
	cout << "Peserta 2 :" << endl;
	cout << "Nama Peserta \t: " << nama_62[x] << endl;
	cout << "Nomor Registrasi: " << noreg_62[x] << endl;
	cout << "Nilai Ujian  \t: " << nilai_62[x] << endl;
	cout << endl;

	if (nilai_62[0] > nilai_62[1]){
		cout << hasil_62 << nama_62[0] << endl;
	}
	else {
		cout << hasil_62 << nama_62[1] << endl;
	}
	
	system("pause");
	main();
	system("pause");
}

