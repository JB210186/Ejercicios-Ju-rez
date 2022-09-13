#include<iostream>
using namespace std;
int main(){
int n;
int apto = 0;
cout<<"Digite la cantidad de piezas: ";
cin>>n;
float longitud[n];

for(int i = 1;i<=n;i++){
		cout<<"Digite la longitud de la pieza "<<i<<": ";
		cin>>longitud[i];
		
		if(longitud[i]>=1 && longitud[i]<=5){
			apto++;
		}
	}
	cout<<"\nLa cantidad de piezas aptas es de: "<<apto;
	return 0;
}