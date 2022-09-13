#include <iostream>
using namespace std;

int main () {
	int  n1, n2 , n3, n4, n5;
	
	cout << "Ingrese el primer numero:  ";
	cin >> n1;
	
	cout << "Ingrese el segundo: ";
	cin >> n2;
	
	cout << "Ingrese el tercero:  ";
	cin >> n3;
	
		cout << "Ingrese el cuarto:  ";
	cin >> n4;
	
		cout << "Ingrese el quinto:  ";
	cin >> n5;
	
	if ( n1 >  n2 && n1 > n3 && n1 > n4 && n1> n5 ) {
		
		cout << "numero mayor:  " << n1 << endl;
	
	} else if ( n2 > n1 && n2 > n3 && n2 > n4 && n2 > n5 ) {
		
		cout << "numero mayor:  " << n2 << endl;
		
	} else if ( n3 > n1 && n3 > n2 && n3> 4 && n3 > n5 ) {
		
		cout << "numero mayor:  " << n3 << endl;
		
	} else if ( n4 > n1 && n4 > n3 && n4>n2  && n4 > n5 ) {
	    cout << "numero mayor:  " << n4 << endl;
	
	} else if ( n5 > n1 && n5 > n4 && n5>n3 && n5 > n2 ) {
		
		cout << "numero mayor:  " << n5 << endl;
	
		
	} else {
		
		cout << "numeros  iguales" << endl;
	}

}