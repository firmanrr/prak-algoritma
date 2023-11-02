#include<iostream>
using namespace std;

void kelipatan3();
void kelipatan7();

void kelipatan3(){
    //kelipatan 3&7 yang lebih besar dari 113 dan lebih kecil dari 1119 menggunakan logika do-while.
    int x=113-113%3+3;
    do {
        cout << x << endl;
        x+=3;
    } while (x<1119);
}

void kelipatan7(){
    int x;
    for(int i=1;i<1119;i++){
    if(i%3==0){
        if(i%7==0){
            cout << i << endl;
            }
        }
    }
}

void ayam(){
    int ayampotong=5000, ayamkampung=7000, x, y;
    cout << "Masukkan jumlah ayam potong yang terjual  : " ; cin >> x;
    cout << "Masukkan jumlah ayam kampung yang terjual : "; cin >> y;
    cout << "\nKomisi yang didapatkan Anton dari ayam potong  : " << "Rp." << x*ayampotong << endl;
    cout << "Komisi yang didapatkan Anton dari ayam kampung : " << "Rp." << y*ayamkampung << endl << endl;
    cout << "Jadi total yang diterima Anton adalah : " << x*ayampotong+y*ayamkampung << endl;
}

int main(){
    kelipatan3(); system("pause");
    cout << endl;
    kelipatan7(); system("pause");
    cout << endl;
    ayam(); system("pause");
}

