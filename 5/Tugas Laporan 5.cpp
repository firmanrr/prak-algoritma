#include <iostream>
using namespace std;
int main()
{
	int m=19, n=40, i;
	
//Tugas Hijrah
	cout <<"\tTUGAS HIJRAH" <<endl;
	cout <<"Bilangan Prima antara 19-40 :" <<endl;
	int a;
	for(int i = m;i <= n;i++){
		a = 0;
		for(int j = 1;j <= i;j++){
			if(i % j == 0){
				a++;
			}
		}
		if(a == 2){
			cout << i << endl;
		}
	}
	cout <<endl;
	
//Tugas Sulastri
	cout <<"\tTUGAS SULASTRI" <<endl;
	cout <<"Bilangan Ganjil antara 19-40 :" <<endl;
	m = 19;
	while(m <= n){

		if( m % 2 == 1){
			cout << m << endl;
		}
		m++;
	}
	cout <<endl;
	
	cout << "Bilangan Genap antara 19-40 :" <<endl;
	m = 19;
	while(m <= n){

		if( m % 2 == 0){
			cout << m << endl;
		}
		m++;
	}
	cout <<endl;

//Tugas Joko
	cout <<"\tTUGAS JOKO" <<endl;
	cout << "Bilangan Kelipatan 3 antara 19-40 :" <<endl;
	m = 19;
	do{
		if(m % 3 == 0){
			cout << m << endl;
		}
        m++;
	}while(m <= n);
	cout <<endl;

	cout << "Bilangan Kelipatan 7 antara 19-49 :" << endl;
    m = 19;
	do{
		if(m % 7 == 0){
			cout << m << endl;
		}
        m++;
	}while(m <= n);

}
