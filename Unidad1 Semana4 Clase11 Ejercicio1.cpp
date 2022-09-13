#include<iostream>

using namespace std;

int main()
{
    int suma,n, valor,prom;
    suma=0;
    for(n=1; n<= 10;n++) 
    {
        cout <<"Ingrese un valor";
        cin >>valor;
        suma=suma+valor;
    }
    cout <<"La suma es:";
    cout <<suma;
    cout <<"\n";
    prom=suma/10;
    cout <<"promedio";
    cout <<prom;
    return 0;
}
