#include<iostream>
using namespace std;
int main(){
	
	float base = 0, altura = 0;
	cout<<"Digite el valor de la base: ";
	cin>>base;
	cout<<"Digite el valor de la altura: ";
	cin>>altura;
	
	cout<<"Area: "<<(base*altura);
	cout<<"\nPerimetro: "<<((2*base)+(2*altura));
	
	return 0;
}