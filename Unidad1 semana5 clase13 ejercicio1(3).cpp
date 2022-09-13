#include<iostream>
#include<cmath>
using namespace std;
int main(){
	float numero = 0;
	cout<<"Digite el valor del numero: ";
	cin>>numero;
	
	float absoluto = abs(numero);
	cout<<"El valor absoluto de "<<numero<<" es: "<<absoluto;
	return 0;
}