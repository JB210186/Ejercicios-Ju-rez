#include <iostream>

using namespace std;

int pot(int z,int x);

int main()
{
int z, x, poten;
cout << "Introduzca la base de potencia: " ;

cin >> z;

cout << "Introduzca el exponente:"  ;

cin >> x;

poten=pot(z,x);

cout << "potencia:" << poten << endl << endl;


return 0;
}

int pot(int z,int x){

if (x==0) return 1;
else return (z*pot(z,x-1));
}