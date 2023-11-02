#include <iostream>

using namespace std;

//variabel global
float a,b,hasil;

float penjumlahan(){
	hasil = a + b;
	return hasil;
}

float pengurangan(){
	hasil = a - b;
	return hasil;
}

float perkalian(){
	hasil = a * b;
	return hasil;
}

float pembagian(){
	hasil = a / b;
	return hasil;
}

int main(){

//Variabel
	int pilih;

//Output Menu 


	cout << "      Kalkulator    " << endl; 
	cout << "1. - Penjumlahan    " << endl; 
	cout << "2. - Pengurangan    " << endl; 
	cout << "3. - Perkalian      " << endl; 
	cout << "4. - Pembagian      " << endl; 
	cout << endl; 

	cout << "MENU (Pilihan 1-4): ";
	cin  >> pilih;
	cout << endl;
	cout << "Masukan Angka Pertama : ";
	cin  >> a;
	cout << "Masukan Angka keuda   : ";
	cin  >> b;
	
	if(pilih == 1){
		cout << "Hasilnya Adalah : " << penjumlahan() << endl;
	}
	else if (pilih == 2){
		cout << "Hasilnya Adalah : " << pengurangan() << endl;
	}
	else if (pilih == 3){
		cout << "Hasilnya Adalah : " << perkalian() << endl;
	}
	else if (pilih == 4){
		cout << "Hasilnya Adalah : " << pembagian() << endl;
	}
	else {
		cout << "Inputan Hanya 1-4" << endl;
		system("pause");
		system("cls");
		main();
	}
    
	//End
	cout << endl;
	char yn;
	lagi:
	cout << "Coba Lagi ?" << endl;
	cout << "[Y/N] ==> ";
	cin >> yn;
	yn = toupper(yn);
	switch(yn){
		case 'Y' :
			system("cls");
			main();
			break;
		case 'N' :
			return 0;
		default :
			cout << "Input Yang Benar" << endl;
			goto lagi;

	}
}
