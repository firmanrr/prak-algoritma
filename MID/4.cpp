#include <iostream>
using namespace std;
int main (){

string prima;
cout<<"Masukan Bilangan Prima 1-50 :";
cin>>prima;

if(prima == "2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,") {
cout<<"Termasuk Bilangan Prima"<<endl;
}
else{
cout<<"Angka yang anda input tidak termasuk bilangan Prima"<<endl;
cout<<"Coba lagi"<<endl;
}

	return 0;

}
