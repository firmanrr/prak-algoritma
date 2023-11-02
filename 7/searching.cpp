#include <iostream>
using namespace std;
//database variabel global{
    int nim[100]={
        11112,
        11113,
        11114,
        11115,
    };
    string nama[100]={
        "Firman",
        "Reski",
        "Rama",
        "Takaz",
    };

    string buku[100]={
        "Belajar Coding",
        "Pemrograman web",
        "Kutipan Sastra",
        "Bumi Manusia",
    };
    string tanggal[100]={
        "18/08/2021",
        "17/09/2021",
        "16/10/2021",
        "15/11/2021",
    };
    int batas = 4;

//prototype
    int binary_search(int[],int,int);
    void tambahdata();
    void hapusdata();
    void lihatdata();
    void caridata();

//Prototype
int main(){
    
    cout << "=== Program Perpustakaan ===" << endl;
    

    //output data
    int pilih;
    cout << endl;
    cout << "==== Pilihan ====" << endl;
    cout << "1. Lihat data" << endl;
    cout << "2. Peminjaman Buku " << endl;
    cout << "3. Pengembalian Buku" << endl;
    cout << "4. Cari data" << endl;
    cout << endl << endl;

    cout << "Input[1-4] = ";
    cin >> pilih;

    switch (pilih){
    case 1:
        lihatdata();
        break;
    case 2:
        tambahdata();
        break;
    case 3:
        hapusdata();
        break;
    case 4:
        caridata();
        break;
    
    default:
        cout << "Inputan 1 - 4 " << endl;
    }
    
    system("pause");
    system("cls");
    main();

}


int binary_search(int a[],int n, int e){
	int f,l,m;
	f = 0;
	l = n - 1;
	while(f <= l){
		m = (f+l)/2;
		if(e == a[m]){
			return (m);
		}
		else{
			if(e > a[m]){f = m + 1;}
			else{l=m-1;}
		}
	}
	return -1;
}

void lihatdata(){
    cout << "\n=== Data Siswa ===" << endl;

    for(int i = 0;i < batas;i++){
        cout << "Siswa " << i + 1 << endl;
        cout << "Nama              : " << nama[i] << endl;
        cout << "NIM               : " << nim[i] << endl;
        cout << "Buku              : " << buku[i] << endl;
        cout << "Tanggal Pinjaman  : " << tanggal[i] << endl;
        cout << endl;
    } 
}
 
void caridata(){
    int res;
    int cari;
    cout << "== Cari Siswa == " << endl;
    cout << "[NIM] ==>";
    cin >> cari;
    res = binary_search(nim,batas,cari);

	if(res != -1){
        cout << endl;
		cout << "Data Ditemukan Pada : " << endl;
        cout << endl;
        cout << "Siswa " << res + 1 << endl;
        cout << "Nama              : " << nama[res] << endl;
        cout << "NIM               : " << nim[res] << endl;
        cout << "Buku              : " << buku[res] << endl;
        cout << "Tanggal Pinjaman  : " << tanggal[res] << endl;
        
	}
	else {
		cout << "NIM Siswa Tidak Ditemukan" << endl;
	}
}

void tambahdata(){
    batas = batas + 1;
  
    cout << "=== Peminjaman Baru ===" << endl;
    cout << "Siswa " << batas << endl;
    cout << "Nama              => "; cin >> nama[batas - 1];
    cout << "NIM               => "; cin >> nim[batas - 1];
    cout << "Buku              => "; cin >> buku[batas - 1];
    cout << "Tanggal Pinjaman  => "; cin >> tanggal[batas -1];
    

}

void hapusdata(){
    lihatdata();
    int a;
    
    cout << "== Pengembalian Buku == " << endl;
    cout << "Siswa Ke : "; cin >> a;
    a = a - 1;
    for (int i = a;i < batas;i++){
        nama[i] = nama[i + 1];
        nim[i] = nim[i + 1];
        buku[i] = buku[i + 1];
        tanggal[i] = tanggal[i + 1];
    }
    cout << "Data Siswa Ke " << a + 1 << " telah terhapus" << endl;
    batas = batas - 1;
}
