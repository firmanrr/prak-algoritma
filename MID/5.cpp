#include <iostream>
using namespace std;
int main(){

	string nama,jenis;
	char karyawan,nik[10],jamd[4],menitd[4],jamp[4],menitp[4];
	
	cout <<"Program Karyawan yang rajin dan pemalas";
	cout <<endl;
	
	cout <<"PERTAMA"<<endl;
	cout <<"Nama karyawan : "; cin >> nama;
    cout <<"NIK           : "; cin >> nik;
    cout <<"Jam datang    : "; cin >> jamd;
    cout <<"Menit datang  : "; cin >> menitd;
    cout <<"Jam pulang    : "; cin >> jamp;
    cout <<"Menit pulang  : "; cin >> menitp;
    
    cout <<"KEDUA"<<endl;
	cout <<"Nama karyawan : "; cin >> nama;
    cout <<"NIK           : "; cin >> nik;
    cout <<"Jam datang    : "; cin >> jamd;
    cout <<"Menit datang  : "; cin >> menitd;
    cout <<"Jam pulang    : "; cin >> jamp;
    cout <<"Menit pulang  : "; cin >> menitp;

	cout <<"KETIGA"<<endl;
	cout <<"Nama karyawan : "; cin >> nama;
    cout <<"NIK           : "; cin >> nik;
    cout <<"Jam datang    : "; cin >> jamd;
    cout <<"Menit datang  : "; cin >> menitd;
    cout <<"Jam pulang    : "; cin >> jamp;
    cout <<"Menit pulang  : "; cin >> menitp;
    
    cout<<endl;
	if(karyawan=1){
		cout<< "jam datang tepat waktu :08.00";
	}else if(karyawan=2){
		cout<< "jam pulang tepat waktu :16.00";
	}else if(karyawan=3){
		cout<<" jam datang tepat waktu dan pulang tepat waktu = RAJIN";
	}else if(karyawan=3){
		cout<<" jika jam datang < jam datang tepat waktu pulang tepat waktu = Sangat Rajin";
	}else if(karyawan=4){
		cout<<"jika jam datang > jam datang tepat waktu dan pulang tepat waktu = Malas ";
	}else{
		cout<<" Jika jam datang > jam datang tepat waktu dan jam pulang < jam pulang tepat waktu = Sangat Malas";
	}

	cout<<"KARYAWAN PERTAMA";
    cout<<"Nama karyawan  : " << nama;
    cout<<"Nik            : " << nik;
    cout<<"jenis karyawan : " << jenis;
    
    cout<<"KARYAWAN KEDUA";
    cout<<"Nama karyawan  : " << nama;
    cout<<"Nik            : " << nik;
    cout<<"jenis karyawan : " << jenis;
    
    cout<<"KARYAWAN KETIGA";
    cout<<"Nama karyawan  : " << nama;
    cout<<"Nik            : " << nik;
    cout<<"jenis karyawan : " << jenis;

return 0;

}


