#include <iostream> //libreria basica 
#include <stdlib.h> // libreria de control de procesos
#include <stdio.h> //libreria de entradas y salidas

using namespace std; //declaracion del nameespace

int main (){  	//Accion principal
	
	//declaracion de variables 
	int slc; // control de seleccion del menu y selector switch
	double Venta, Bono; //captura de datos 
	string Nombre; // almacenamos el nombre del empleado
	
	//inicio de ciclo do-While, no se saldra hasta que ingresemos la opcion de salida del programa (opcion 3)
	
	do {	
	
	cout << ("   ---- XY S.A ---- " ) << endl;
 	cout << (" ---- BIENVENIDO ---- ") << endl;
 	cout << (" 1. Ingresar importe de ventas del trabajador ") << endl;
 	cout << (" 2. Mostrar datos estadisticos ") << endl;
 	cout << (" 3. Salir ") << endl;
	cin >> slc;
	system ("cls");  // limpia la pantalla para evitar sobrecarga 

//ingresamos al switch segun opcion seleccionada	
	switch (slc){
	
	case 1: 
				
		cout << (" ------ Importe de ventas del trabajador ------ ") << endl;
		cout << ("Ingrese el nombre del trabajador: ") ;
		cin >> Nombre;  
		cout << ("Ingrese importe de ventas del trabajador: ") ;
		cin >> Venta;
		
		// segun el importe ingresado por el empleado se realiza el calculo del bono
		if (Venta > 0 && Venta < 100){
			
			Bono = Venta * 0.03;
			
		} else if ( Venta > 101 && Venta < 150) {
			
			Bono = Venta * 0.04;
		} else if (Venta > 151 && Venta <200)
		       {
			
			Bono = Venta * 0.05;
		} else if (Venta > 201 && Venta <250)
		       {
			
			Bono = Venta * 0.06;
	    } else {
			
			Bono = Venta * 0.07;
		}
	system ("cls");
	
	break;
	case 2:
		// muestra en pantalla todos los datos pedidos ya calculados
		cout << (" ------ Impresion de datos ------ ") << endl;
		cout << (" Historial del trabajador  ") << Nombre << endl;
		cout << (" Cantidad vendida ----- ") << Venta << endl;
		cout << (" Bono ganado por importe ----- ") << Bono << endl;
		
		
	break;
	case 3:
		//mensaje de salida del sistema
		cout << (" Saliendo...") << endl;
		break;
			
	}
			
	}while (slc != 3);

 	
	
}