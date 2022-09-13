#include<iostream>
using namespace std;

void tabla(int n){
	for(int i = 1;i<=10;i++){
		cout<<n*i;
		cout<<"\n";
	}
}

int main(){
	int n = 0;
	cout<<"Digite el numero de la tabla a imprimir: ";
	cin>>n;
	tabla(n);
	
	return 0;
}