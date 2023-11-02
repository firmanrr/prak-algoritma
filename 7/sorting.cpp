#include <iostream>
using namespace std;
//variabel global
	string nama[5];
	int nilai[5][3];

//prototype
void isi();


int main(){
	string mapel[3] = {
		">> Matematika <<",
		">> Bahasa <<",
		">> IPA <<",
	};
	isi();
	int i,j,bantu;
	string kosong;
	int m;//matapelajaran
	//Sebelum Pengurutan
	cout << " >> Data << " << endl;
	//Data Mentah 
	for(i = 0;i < 5;i++){
		cout << "Nama         : " << nama[i] << endl;
		cout << "Nilai MM     : " << nilai[i][0] << endl;
		cout << "Nilai Bahasa : " << nilai[i][1] << endl;
		cout << "Nilai IPA    : " << nilai[i][2] << endl;
		cout << endl;
	}

	for(m = 0;m < 3;m++){
		cout << mapel[m] << endl;
		//Proses Sorting
		for(int i = 0;i < 5;i++){
			for(int j = i;j < 5;j++){
				if(nilai[i][m] < nilai[j][m]){
					//nilai
					bantu = nilai[i][m];
					nilai[i][m] = nilai[j][m];
					nilai[j][m] = bantu;
					//nama
					kosong = nama[i];
					nama[i] = nama[j];
					nama[j] = kosong;

				}
			}
		}
		//Output
		for(int i = 0;i < 5;i++){
			cout << "No " << i + 1 << " " << nama[i] << " \t: " <<  nilai[i][m] << endl;
		}

		cout << endl;			
		isi();
	}
	system("pause");
	return 0;
}

void isi(){
	nama[0] = "Salwa";
	nama[1] = "Miftahul";
	nama[2] = "Refqi";
	nama[3] = "Fatih";
	nama[4] = "Alfariz";

	//Salwa[0]
	nilai[0][0] = 81; 
	nilai[0][1] = 83; 
	nilai[0][2] = 84; 

	//MiftahulJannah[1]
	nilai[1][0] = 82; 
	nilai[1][1] = 88; 
	nilai[1][2] = 89;

	//Refqi[2]
	nilai[2][0] = 87; 
	nilai[2][1] = 89; 
	nilai[2][2] = 90;

	//Fatih[3]
	nilai[3][0] = 80; 
	nilai[3][1] = 82; 
	nilai[3][2] = 85;

	//Alfariz[4]
	nilai[4][0] = 92; 
	nilai[4][1] = 81; 
	nilai[4][2] = 84;
}
