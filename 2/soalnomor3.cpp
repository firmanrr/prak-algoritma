#include <iostream>

using namespace std;

int main(){

//Variable Pertama
	float a; //Jarak Rumah Ke kampus
//Variable Kedua
	float b; //2 digit terkahir dari nim
	float c;
//Judul
	cout << "==== Program Tukar Variable ===="<<endl;


//Jarak Rumah Ke Kampus
	cout << "Masukan jarak rumah ke kampus :";
	cin >> a;
//2 digit terakhir dari nim anda
	cout << "Masukan 2 digit terakhir dari nim anda :";
	cin >> b;
	cout <<endl;
//output hasil
	cout << "Hasil " << endl;
	cout << "Nilai Variabel pertama :> " << a << endl;
	cout << "Nilai Variabel Kedua   :> " << b << endl;
	cout <<endl;
//Penugasan Tukar Nilau
 c = a;
 a = b;
 b = c;
//hasil setelah tertukar
	cout << "Hasil Setelah Tertukar" << endl;
	cout << "Nilai Variabel pertama :> " << a << endl;
	cout << "Nilai Variabel Kedua   :> " << b << endl;
}
