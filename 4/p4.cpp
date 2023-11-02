#include <iostream>

using namespace std;

int main(){
	
	int num = 0;
	string nama[4];
	string nim[4];
	int nilai[4];
	int rata;

//Pertama
	cout << "\n";
	cout << "PERTAMA" << endl;
	cout << "Masukan Nama :";
	cin >> nama[num];
	cout << "Masukan Nim  :";
	cin >> nim[num];
	cout << "Masukan nilai akhir :";
	cin >> nilai[num];
//Kedua
	cout << "\n";
	cout << "KEDUA" << endl;
	num++;
	cout << "Masukan Nama :";
	cin >> nama[num];
	cout << "Masukan Nim  :";
	cin >> nim[num];
	cout << "Masukan nilai akhir :";
	cin >> nilai[num];
//Ketiga
	cout << "\n";
	cout << "KETIGA" << endl;
	num++;
	cout << "Masukan Nama :";
	cin >> nama[num];
	cout << "Masukan Nim  :";
	cin >> nim[num];
	cout << "Masukan nilai akhir :";
	cin >> nilai[num];
//Keempat
	cout << "\n";
	cout << "KEEMPAT" << endl;
	num++;
	cout << "Masukan Nama :";
	cin >> nama[num];
	cout << "Masukan Nim  :";
	cin >> nim[num];
	cout << "Masukan nilai akhir :";
	cin >> nilai[num];
	cout << endl;
//0
	num = 0;
	if(nilai[num] > nilai[1] and nilai[num] > nilai[2] and nilai[num] > nilai[3] and nilai[num] > nilai[4]){
	cout << "Nilai Tertinggi : " << endl;
	cout << "Nama  :" << nama[0] << endl;
	cout << "NIM   :" << nim[0] << endl;
	cout << "Nilai :" << nilai[0] << endl;
	num++;
	}
//1
	else if (nilai[1] > nilai[0] and nilai[1] > nilai[2] and nilai[1] > nilai[3] and nilai[1] > nilai[4]){
	cout << "Nilai Tertinggi : " << endl;
	cout << "Nama  :" << nama[1] << endl;
	cout << "NIM   :" << nim[1] << endl;
	cout << "Nilai :" << nilai[1] << endl;
	num++;
	}
//2
	else if (nilai[2] > nilai[0] and nilai[2] > nilai[1] and nilai[2] > nilai[3] and nilai[2] > nilai[4]){
	cout << "Nilai Tertinggi : " << endl;
	cout << "Nama  :" << nama[2] << endl;
	cout << "NIM   :" << nim[2] << endl;
	cout << "Nilai :" << nilai[2] << endl;
	num++;
	}
//3
	else if (nilai[3] > nilai[1] and nilai[3] > nilai[2] and nilai[3] > nilai[0] and nilai[3] > nilai[4]){
	cout << "Nilai Tertinggi : " << endl;
	cout << "Nama  :" << nama[3] << endl;
	cout << "NIM   :" << nim[3] << endl;
	cout << "Nilai :" << nilai[3] << endl;
	num++;
	}
//4
	else if (nilai[4] > nilai[1] and nilai[4] > nilai[2] and nilai[4] > nilai[3] and nilai[4] > nilai[0]){
	cout << "Nilai Tertinggi : " << endl;
	cout << "Nama  :" << nama[4] << endl;
	cout << "NIM   :" << nim[4] << endl;
	cout << "Nilai :" << nilai[4] << endl;
	num++;
	}	
//rata-rata	
	cout << endl;
    rata = (nilai[0] + nilai[1] + nilai[2] + nilai[3]) / 4;
    cout << "Rata-Rata nilai = " << rata << endl;

	system("pause");		
}
