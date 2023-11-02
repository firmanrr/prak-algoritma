#include <iostream>

using namespace std;

//variabel Global

    int uang;

    //pemasukan
    string nammasuk[100];
    int  pricemasuk[100];
    int datmasuk = -1;

    //pengeluaran
    string namkeluar[100];
    int pricekeluar[100];
    int datkeluar = -1;
    
//Prototype
void about();
void tambah();
void pengeluaran();
void pemasukan();
void daftar();
void hapus();
void hapuspemasukan();
void hapuspengeluaran();
void cari();
void urutan();
void urutanpemasukan();
void urutanpengeluaran();
int totaltransaksi(int a);

//pembantu
bool satu = true;
void bantu(){
    //pemasukan
    nammasuk[0] = "Mencopet";
    nammasuk[1] = "Jual Pop Ice";
    nammasuk[2] = "Jual Ayam";

    pricemasuk[0] = 500000;
    pricemasuk[1] = 100000;
    pricemasuk[2] = 200000;

    datmasuk = 2;
    uang = pricemasuk[0] + pricemasuk[1] + pricemasuk[2]; 
    // pengeluaran
    namkeluar[0] = "Beli Kopikap";
    namkeluar[1] = "Di Copet";
    namkeluar[2] = "Beli ban Dalam";

    pricekeluar[0] = 500000;
    pricekeluar[1] = 100000;
    pricekeluar[2] = 200000;

    datkeluar = 2;

}
int main(){
    if(satu == true){
        satu = false;
        bantu();
    }
    int pilih;
    cout << "=== Program Budgeting Uang ===" << endl << endl;
    cout << "Uang Di dompet : Rp "<< uang << endl;
    
    //tampilan menu
    cout << "|=======================|" << endl;
    cout << "| ====== Menu ========= |" << endl;
    cout << "| 1 | Tambah Transaksi  |" << endl;
    cout << "| 2 | Daftar Transaksi  |" << endl;
    cout << "| 3 | Hapus  Transaksi  |" << endl;
    cout << "| 4 | Cari   Transaksi  |" << endl;
    cout << "| 5 | Urutan Transaksi  |" << endl;
    cout << "| 6 | Info              |" << endl;
    cout << "| 7 | Keluar            |" << endl;
    cout << "=========================" << endl;
    
    lagi:
    cout << endl << "Pilih[1-7] ==> ";
    cin >> pilih;

    system("cls");           
    //pemilihan
    switch(pilih){
        case 1:
            tambah();
            break;
        case 2:
            daftar();
            break;
        case 3:         
            hapus();           
            break;
        case 4:
            cari();
            break;
        case 5:
            urutan();
            break;
        case 6:
            about();
            break;
        case 7:
            return 0;
            break;
        default:
            cout << "== Inputan Hanya 1 - 7 == " << endl;
            system("pause");
            system("cls");
            main();
    }

    //try again
    system("pause");
    system("cls");
    main();
}

void about(){
    cout << "=== Tugas Final Algoritma Pemrograman===" << endl; 
    cout << "\n";
    cout << "==== Kelompok Biru Tosca (4) =====" << endl;
    cout << "Kelas : C " << endl <<endl; 
    cout << "Daftar Nama Kelompok :" << endl << endl;
    cout << "------------------------------------------" << endl;
    cout << "| Nama                  | NIM            |" << endl;
    cout << "|----------------------------------------|" << endl;
    cout << "| Ahmad Ghazali         | 60900121064    |" << endl;
    cout << "| Firman Reski Ramadhan | 60900121062    |" << endl;
    cout << "| Muhammad Rafly        | 60900121062    |" << endl;
    cout << "-----------------------------------------|" << endl;

}
  

void tambah(){
    int pilih;

    cout << "=== Tambah Transaksi ===" << endl;
    cout << " 1 . Pemasukan   " << endl;
    cout << " 2 . Pengeluaran " << endl;

    cout << endl << "Pilih [1-2] ==> ";
    cin >> pilih;

    y :
    //proses
    switch(pilih){
        case 1 :
            system("cls");
            pemasukan();
            break;
        case 2 :
            system("cls");
            pengeluaran();
            break;
        default:
            cout << "== Inputan Cuma [1-2] " << endl;
            system("pause");
            tambah();
    }
//try again
    x :
    char yn;
    cout << "Masih Mau Tambah Transaksi ?" << endl;
    cout << "[Y/N] =>";
    cin >> yn;
    yn = toupper(yn);

    switch(yn){
        case 'Y' :
            system("cls");
            goto y;
            break;
        case 'N' :
            system("cls");
            break;
        default :
            cout << "Input Yang Benar !!!" << endl;
            system("pause");
            goto x;
    }


}


void pemasukan (){
    datmasuk++;
    int nama;
    cout << "=== Pemasukan "<< datmasuk + 1 <<" ===" << endl;
    cout << "Nama   Pemasukan    => ";
    cin.ignore();
    getline(cin,nammasuk[datmasuk]);
    cout << "Nominal Pemasukan   => ";
    cin >> pricemasuk[datmasuk];

    uang = uang + pricemasuk[datmasuk];


}



void pengeluaran(){
    datkeluar++;
    cout << "=== Pengeluaran ===" << endl;
    cout << "Nama   Pengeluaran  => ";
    cin.ignore();
    getline(cin,namkeluar[datkeluar]);
    cout << "Nominal Pengeluaran => ";
    cin >> pricekeluar[datkeluar];


    uang = uang - pricekeluar[datkeluar];


}

int totaltransaksi(int a){
    int total;
    for(int i = 0;i < a;i++){
        total = pricemasuk[i] + pricemasuk[i + 1];
    }
    return total;
}



void daftar(){
    cout << "=== Program Budgeting Uang ===" << endl << endl;
    cout << "Uang Di dompet : Rp "<< uang << endl;
    int total;
    int totalkeluar;
    cout << "==== Daftar Transaksi ==== " << endl;
//pemasukan
    cout << "=== Pemasukan ===" << endl;
    for(int i = 0;i <= datmasuk;i++){
        cout << "Transaksi " << i + 1 << endl;
        cout << "Nama    : " << nammasuk[i] << endl;
        cout << "Nominal : Rp " << pricemasuk[i] << endl << endl;
    }

    total = totaltransaksi(datmasuk);

    if(!(datmasuk <= 0)){
        cout << endl << "Total Pemasukan : Rp " << total << endl; 
    }

    cout << endl;

//pengeluaran
    cout << "=== Pengeluaran ===" << endl;
    for(int i = 0;i <= datkeluar;i++){
        cout << "Transaksi " << i + 1 << endl;
        cout << "Nama    : " << namkeluar[i] << endl;
        cout << "Nominal : Rp " << pricekeluar[i] << endl << endl;
    }

    total = totaltransaksi(datmasuk);

    if(!(datkeluar <= 0)){
        cout << endl << "Total Pengeluaran : Rp " << totalkeluar << endl; 
    }
}

void hapus(){
    cout << "==== Hapus Transaksi ====" << endl;
    cout << "1. Data Pemasukan" << endl;
    cout << "2. Data Pengeluaran" << endl;
    cout << "Input[1-2] ==> ";
    int pilih;
    cin  >> pilih;

    switch(pilih){
        case 1 :
            hapuspemasukan();
            break;
        case 2 :
            hapuspengeluaran();
            break;
    }

}


void hapuspemasukan(){
    int hapus;
    int total;
    int pricehapus;
//output Data
 cout << "=== Pemasukan ===" << endl;
    for(int i = 0;i <= datmasuk;i++){
        cout << "Transaksi " << i + 1 << endl;
        cout << "Nama    : " << nammasuk[i] << endl;
        cout << "Nominal : Rp " << pricemasuk[i] << endl << endl;
    }
    for(int i = 0;i < datmasuk;i++){
        total = pricemasuk[i] + pricemasuk[i + 1];
    }
    if(!(datmasuk <= 0)){
        cout << endl << "Total Pemasukan : Rp " << total << endl; 
    }

    cout << endl;

//Proses Delete
    cout << "Hapus Transaksi Ke ?" << endl;
    cout << "[Input] ==>";
    cin >> hapus;
    hapus--;
    pricehapus = pricemasuk[hapus];
    uang = uang - pricehapus;
    //perulangan proses delete
    for(int i = hapus;i <= datmasuk;i++){
        nammasuk[i] = nammasuk[i + 1];
        pricemasuk[i] = pricemasuk[i + 1];
    }

    system("cls");
    datmasuk--;
    daftar();
    cout << endl;
    cout << "Transaksi Ke " << hapus + 1 << " Berhasil di hapus" << endl;

}



void hapuspengeluaran(){
    int hapus;
    int total;
    int pricehapus;

//output Data
 cout << "=== Pengeluaran ===" << endl;
    for(int i = 0;i <= datkeluar;i++){
        cout << "Transaksi " << i + 1 << endl;
        cout << "Nama    : " << namkeluar[i] << endl;
        cout << "Nominal : Rp " << pricekeluar[i] << endl << endl;
    }
    for(int i = 0;i < datkeluar;i++){
        total = pricekeluar[i] + pricekeluar[i + 1];
    }
    if(!(datkeluar <= 0)){
        cout << endl << "Total Pengeluaran : Rp " << total << endl; 
    }

    cout << endl;

//Proses Delete
    cout << "Hapus Transaksi Ke ?" << endl;
    cout << "[Input] ==>";
    cin >> hapus;
    hapus--;
    pricehapus = pricekeluar[hapus];
    uang = uang + pricehapus;
    //perulangan proses delete
    for(int i = hapus;i <= datkeluar;i++){
        namkeluar[i] = namkeluar[i + 1];
        pricekeluar[i] = pricekeluar[i + 1];
    }

    system("cls");
    datkeluar--;
    daftar();
    cout << endl;
    cout << "Transaksi Ke " << hapus + 1 << " Berhasil di hapus" << endl;

}


void cari(){
    string cari;
    bool ditemukan1 = false;
    bool ditemukan2 = false;
    cout << "=== Pencaharian ===" << endl;
    cout << "Cari Transaksi => ";
    cin.ignore();
    getline(cin,cari);

    //pencharian pemasukan
    for(int i = 0;i <= datmasuk;i++){
        if(cari == nammasuk[i]){
            cout << "=== Data Di Temukan Pada Transaksi Pemasukan === " << endl;
            cout << "Transaksi " << i + 1 << endl;
            cout << "Nama    : " << nammasuk[i] << endl;
            cout << "Nominal : Rp " << pricemasuk[i] << endl << endl;
            ditemukan1 = true;
        }
    }

    //pencharian pengeluaran
    for(int i = 0;i <= datkeluar;i++){
        if(cari == namkeluar[i]){
            cout << "=== Data Di Temukan Pada Transaksi Pengeluaran === " << endl;
            cout << "Transaksi " << i + 1 << endl;
            cout << "Nama    : " << namkeluar[i] << endl;
            cout << "Nominal : Rp " << pricekeluar[i] << endl << endl;
            ditemukan2 = true;
        }
    }

    if(ditemukan1 == false and ditemukan2 == false){
        cout << "Data Tidak ditemukan" << endl;
    }

}

void urutan(){
    int pilih;
    cout << "==== Urutan Transaksi ====" << endl;
    cout << " 1 . Pemasukan" << endl;
    cout << " 2 . Pengeluaran" << endl;
    cout << endl <<"Input [1-2] ==>";
    cin >> pilih;
    switch(pilih){
        case 1:
            urutanpemasukan();
            break;
        case 2 :
            urutanpengeluaran();
            break;
    }
}

void urutanpemasukan(){
    int temp;
    string tempname;
    string l_nammasuk[100];
    int l_pricemasuk[100];
    cout << "=== Urutan Pemasukan Terbesar ===" << endl;
    //pemberian Value dari global ke Lokal
    for(int i = 0;i <= datmasuk;i++){
        l_nammasuk[i] = nammasuk[i]; 
        l_pricemasuk[i] = pricemasuk[i]; 
    }

    //proses Sorting (selection sort) 
    for(int  i = 0;i <= datmasuk;i++){
        for(int j = i;j <= datmasuk;j++){
            if(l_pricemasuk[j] > l_pricemasuk[i]){
                //harga
                temp = l_pricemasuk[i];
                l_pricemasuk[i] = l_pricemasuk[j];
                l_pricemasuk[j] = temp;

                //nama
                tempname = l_nammasuk[i];
                l_nammasuk[i] = l_nammasuk[j];
                l_nammasuk[j] = tempname;
            }
        }
    }

    //output data
    for(int i = 0;i <= datmasuk;i++){
        cout << "No  " << i + 1 <<" : " <<endl;
        cout << "Nama    : " << l_nammasuk[i] << endl;
        cout << "Nominal : Rp " << l_pricemasuk[i] << endl << endl;         
    }
}

void urutanpengeluaran(){
    int temp;
    string tempname;
    string l_namkeluar[100];
    int l_pricekeluar[100];
    cout << "=== Top Pengeluaran ===" << endl;
    //pemberian Value dari global ke Lokal
    for(int i = 0;i <= datkeluar;i++){
        l_namkeluar[i] = namkeluar[i]; 
        l_pricekeluar[i] = pricekeluar[i]; 
    }

    //proses Sorting (selection sort) 
    for(int  i = 0;i <= datkeluar;i++){
        for(int j = i;j <= datkeluar;j++){
            if(l_pricekeluar[j] > l_pricekeluar[i]){
                //harga
                temp = l_pricekeluar[i];
                l_pricekeluar[i] = l_pricekeluar[j];
                l_pricekeluar[j] = temp;

                //nama
                tempname = l_namkeluar[i];
                l_namkeluar[i] = l_namkeluar[j];
                l_namkeluar[j] = tempname;
            }
        }
    }

    //output data
    for(int i = 0;i <= datkeluar;i++){
        cout << "No  " << i + 1 <<" : " <<endl;
        cout << "Nama    : " << l_namkeluar[i] << endl;
        cout << "Nominal : Rp " << l_pricekeluar[i] << endl << endl;         
    }
}
