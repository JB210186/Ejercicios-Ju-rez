#include<iostream>
#include<cmath>
using namespace std;

float pitagoras(float,float);

int main(){
	float cat1, cat2, hipo=0;
	cout <<"Ingrese cateto 1:";
	cin>>cat1;
	cout<<"Ingrese cateto 2:";
	cin>>cat2;
	hipo=pitagoras(cat1,cat2);
	cout<<"La hipotenusa del triangulo:";
	cout<<hipo;
	return 0;
}
float pitagoras(float x, float y){
	float resut=0;
	resut= sqrt(pow(x,2)+pow(y,2));
	return resut;
}