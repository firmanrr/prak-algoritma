#include<iostream>
using namespace std;
string nama[100];
int i, x;

double kehadiran[20];
double tugas[20];
double mid[20];
double laporan[20];
double final[20];
double hitungkehadiran(){
    return kehadiran[i]*0.1;
}
double hitungtugas(){
    return tugas[i]*0.1;
}
double hitungmid(){
    return mid[i]*0.15;
}
double hitunglaporan(){
    return laporan[i]*0.4;
}
double hitungfinal(){
    return final[i]*0.25;
}
double total(){
    double nilaikehadiran = hitungkehadiran();
    double nilaitugas = hitungtugas();
    double nilaimid = hitungmid();
    double nilailaporan = hitunglaporan();
    double nilaifinal = hitungfinal();
    return nilaikehadiran + nilaitugas + nilaimid + nilailaporan + nilaifinal;
}
int main(){
cout << "Masukkan jumlah mahasiswa : "; cin >> x;
cout << endl;
for (i=1; i<=x; i++){ cin.ignore();
    cout << "Mahasiswa ke-" << i << endl;
    cout << "Masukkan nama Mahasiswa : "; getline(cin, nama[i]);
    cout << "Masukkan nilai kehadiran (value 10%) : "; cin >> kehadiran[i];
    cout << "Masukkan nilai tugas (value 10%): "; cin >> tugas[i];
    cout << "Masukkan nilai mid (value 15%): "; cin >> mid[i];
    cout << "Masukkan nilai laporan (value 40%) : "; cin >> laporan[i];
    cout << "Masukkan nilai final (value 25%): "; cin >> final[i];
    cout << endl << endl;
    }
    for (i=1; i<=x; i++){
        if (total()>=80){
            cout << "Mahasiswa atas nama " << nama[i] << " mendapat nilai : A" << endl << endl;
    } else {
        if (total()>=70){
            cout << "Mahasiswa atas nama " << nama[i] << " mendapat nilai : B" << endl << endl;
        } else {
            if (total()>=60){
                cout << "Mahasiswa atas nama " << nama[i] << " mendapat nilai : C" << endl << endl;
            } else {
                if (total()>=50){
                    cout << "Mahasiswa atas nama " << nama[i] << " mendapat nilai : D" << endl << endl;
                } else {
                    if (total()>=0){
                        cout << "Mahasiswa atas nama " << nama[i] << " mendapat nilai : E" << endl << endl;
                    }
                }
            }
        }
    }
}


}
