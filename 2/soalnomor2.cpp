#include <iostream>

using namespace std;

string br1,br2,br3,br4,br5;

int hbr1,hbr2,hbr3,hbr4,hbr5 ;

string kdl1, kdl2, kdl3, kdl4, kdl5;

int main(){
	
	cout << "masukkan barang yang diingnkan :"<<endl;
	cout << "nama barang 1 \t\t:"; cin >> ::br1;
	cout << "harga barang 1 \t\t:"; cin >> ::hbr1;
	cout << "tanggal kadaluarsa 1 \t:"; cin >> ::kdl1;
	cout << "\n";
	
	cout << "nama barang 2 \t\t:"; cin >> ::br2;
	cout << "harga barang 2 \t\t:"; cin >> ::hbr2;
	cout << "tanggal kadaluarsa 2 \t:"; cin >> ::kdl2;
	cout << "\n";    
	
	cout << "nama barang 3 \t\t:"; cin >> ::br3;
	cout << "harga barang 3 \t\t:"; cin >> ::hbr3;
	cout << "tanggal kadaluarsa 3 \t:"; cin >> ::kdl3;
	cout << "\n";
	
	cout << "nama barang 4 \t\t:"; cin >> ::br4;
	cout << "harga barang 4 \t\t:"; cin >> ::hbr4;
	cout << "tanggal kadaluarsa 4 \t:"; cin >> ::kdl4;
	cout << "\n";
	
	cout << "nama barang 5 \t\t:"; cin >> ::br5;
	cout << "harga barang 5 \t\t:"; cin >> ::hbr5;
	cout << "tanggal kadaluarsa 5 \t:"; cin >> ::kdl5;
	cout << "\n";
	
	
	cout << "=========================================================" << endl;
	cout << "|No| Nama Barang \t|Harga \t\t| Tgl kadaluarsa|" << endl;
	cout << "|--------------------------------------------------------" <<endl;
	cout << "|1 | "<<::br1<<"\t\t| Rp "<<::hbr1<<"\t| "<<::kdl1 <<"\t|" << endl;
	cout << "|2 | "<<::br2<<"\t\t| Rp "<<::hbr2<<"\t| "<<::kdl2 <<"\t|" << endl;
	cout << "|3 | "<<::br3<<"\t\t| Rp "<<::hbr3<<"\t| "<<::kdl3 <<"\t|" << endl;
	cout << "|4 | "<<::br4<<"\t\t| Rp "<<::hbr4<<"\t| "<<::kdl4 <<"\t|" << endl;
	cout << "|5 | "<<::br1<<"\t\t| Rp "<<::hbr5<<"\t| "<<::kdl5 <<"\t|" << endl;
	cout << "=========================================================" << endl;
	
	return 0;
}

