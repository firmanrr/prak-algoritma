#include <iostream>

using namespace std;

int main(){
	string nama_karyawan,jenis_karyawan;
	char nik[10],jam_datang[4],menit_datang[4],jam_pulang[4],menit_pulang[4],plh;
	
	cout<<"mengetahui karyawan yang rajin dan pemalas"<<endl;
	
	cout << "1. Nama karyawan : " ; cin >> nama_karyawan;
    cout << "   NIK           : " ; cin >> nik;
    cout << "   Jam datang    : " ; cin >> jam_datang;
    cout << "   Menit datang  : " ; cin >> menit_datang;
    cout << "   Jam pulang    : " ; cin >> jam_pulang;
    cout << "   Menit pulang  : " ; cin >> menit_pulang;
    
	cout << "2. Nama karyawan : " ; cin >> nama_karyawan;
    cout << "   NIK           : " ; cin >> nik;
    cout << "   Jam datang    : " ; cin >> jam_datang;
    cout << "   Menit datang  : " ; cin >> menit_datang;
    cout << "   Jam pulang    : " ; cin >> jam_pulang;
    cout << "   Menit pulang  : " ; cin >> menit_pulang;

	cout << "3. Nama karyawan : " ; cin >> nama_karyawan;
    cout << "   NIK           : " ; cin >> nik;
    cout << "   Jam datang    : " ; cin >> jam_datang;
    cout << "   Menit datang  : " ; cin >> menit_datang;
    cout << "   Jam pulang    : " ; cin >> jam_pulang;
    cout << "   Menit pulang  : " ; cin >> menit_pulang;
    
    cout<<endl;
	if(plh=1){
		cout<< "jam datang tepat waktu : 08.00";
	}else if(plh=2){
		cout<< "jam pulang tepat waktu : 16.00";
	}else if(plh=3){
		cout<<" jam datang tepat waktu dan pulang tepat waktu = RAJIN";
	}else if(plh=3){
		cout<<" jika jam datang < jam datang tepat waktu pulang tepat waktu = SANGAT RAJIN";
	}else if(plh=4){
		cout<<"jika jam datang > jam datang tepat waktu dan pulang tepat waktu = MALAS ";
	}else{
		cout<<" Jika jam datang > jam datang tepat waktu dan jam pulang < jam pulang tepat waktu = SANGAT MALAS";
	}

	cout<<"\n\n\n1. JENIS KARYAWAN";
    cout<<"\nNama karyawan  : " << nama_karyawan;
    cout<<"\nNik            : " << nik;
    cout<<"\njenis karyawan : " << jenis_karyawan;
    
    cout<<"\n\n\n2. JENIS KARYAWAN";
    cout<<"\nNama karyawan  : " << nama_karyawan;
    cout<<"\nNik            : " << nik;
    cout<<"\njenis karyawan : " << jenis_karyawan;
    
    cout<<"\n\n\n3. JENIS KARYAWAN";
    cout<<"\nNama karyawan  : " << nama_karyawan;
    cout<<"\nNik            : " << nik;
    cout<<"\njenis karyawan : " << jenis_karyawan;
    

}


