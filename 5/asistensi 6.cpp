#include <iostream>
using namespace std;

int main()
{
	int a=10 ,i,j,k;
	
	for(i=1;i<=a;i++){	
		for(j=1;j<=a-i;j++){
		cout << "";}
		for(k=1;k<=i;k++){
		cout << "*";
			}
			cout <<endl;	
	}
}

