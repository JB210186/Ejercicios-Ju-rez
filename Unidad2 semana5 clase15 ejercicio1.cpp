#include<iostream>
#include<cmath>
using namespace std;
int main(){
int n;
int negativo = 0, positivo = 0;
cout<<"Digite el valor de n: ";
cin>>n;
float array[n];

for(int i = 1;i<=n;i++){
cout<<"Digite un numero: ";
cin>>array[i];
if(array[i]<0){
	negativo++;
}
else if(array[i]>0){
	positivo++;
}
	
}

cout<<"\nLa cantidad de positivos es: "<<positivo;
cout<<"\nLa cantidad de negativos es: "<<negativo;

return 0;
}