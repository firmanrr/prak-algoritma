#include <iostream>

using namespace std;

//deklarasi function/prosedur
void ketentuan();
void nilaiakhir();
float fhadir();
float ftugas();
float fmid();
float flaporan();
float ffinal();
float total();


//varibel global;
string nama[100];
float hadir[100];
float tugas[100];
float mid[100];
float laporan[100];
float final[100];
float akhir[100];
char predikat[100];
int j; // jumlah mahasiswa
int i; //index



int main(){
	
	cout << "== Nilai Akhir Mahasiswa ==" << endl;
	cout << endl << endl;
	cout << "Jumlah Mahasiswa : ";
	cin >> j;

	cout << endl;

	for(i = 0;i < j;i++){
		cout << "=== Mahasiswa " << i + 1 << " ===" << endl;
		cout << "Masukan Nama Mahasiswa  => "; cin.ignore();getline (cin, nama[i]);
		cout << "Masukan Nilai Kehadiran => "; cin >> hadir[i];
		cout << "Masukan Nilai Tugas     => "; cin >> tugas[i];
		cout << "Masukan Nilai MID       => "; cin >> mid[i];
		cout << "Masukan Nilai Laporan   => "; cin >> laporan[i];
		cout << "Masukan Nilai Final     => "; cin >> final[i];
		cout << endl;

	}


	ketentuan();

	cout << "=== Hasil Data ===" << endl;
	nilaiakhir();
	

	system("pause");
}


void ketentuan(){
	for(i = 0;i < j;i++){
		
		hadir[i]     = fhadir();
		tugas[i]     = ftugas();
		mid[i]       = fmid();
		laporan[i]   = flaporan();
		final[i]     = ffinal();

	}


}


void nilaiakhir(){
	for(i = 0;i < j;i++){
		cout << "=== Mahasiswa " << i + 1 << " ===" << endl;
		cout << "Nama              : " << nama[i] << endl;
		akhir[i] = total();
		cout << "Nilai Total/Akhir : " << akhir[i] << endl;


		if (akhir[i] >= 80 and akhir[i] <= 100){
			predikat[i] = 'A';
		}

		else if(akhir[i] >= 70 and akhir[i] <= 79){
			predikat[i] = 'B';

		}

		else if(akhir[i] >= 60 and akhir[i] <= 69){
			predikat[i] = 'C';

		}

		else if(akhir[i] >= 50 and akhir[i] <= 59){
			predikat[i] = 'D';

		}

		else if(akhir[i] >= 0 and akhir[i] <= 49){
			predikat[i] = 'E';

		}

		cout << "Predikat          : " << predikat[i] << endl;

	}
}


float fhadir(){

	return hadir[i] * 0.10 ;
}


float ftugas(){

	return tugas[i] * 0.15 ;
}

float fmid(){

	return mid[i] * 0.15 ;
}

float flaporan(){

	return laporan[i] * 0.40;
}

float ffinal(){

	return final[i] * 0.25;

}



float total(){
	int total = hadir[i] + tugas[i] + mid[i] + laporan[i] + final[i];
	return total;
}

