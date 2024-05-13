/*
un array o un vector es una estructura de datos que permite
almacenar y hacer referencia a datos del mismo tipo. todos
los elementos del array son del mismo tipo, y tiene una cantidad de
elementos fija. 
declaracion del array e inicializacion: int vector [] = [];
los arrays pueden ser unidimensionales o multidimensionales
para hacer referencia a cada umo de los elementos del arrays 
utilizamos una variable que va a haver de puntero en mi array.
*/

/*
tenemos una billeterea que tiene 10 billetes, pedirle al
ususario que ingrese el valor nominar de cada uno de esos 
biletes. al finalizar, contar cuanto dinero tiene el usuario
*/
#include <iostream>
#include <string>

using namespace std; 

int main() { 
	const int cantidadBilletes = 10;
	int billetera [cantidadBilletes]; 
	int acumulador = 0;
	
	
	//ciclo de ingreso de datos al array
	for(int i = 0; i < cantidadBilletes ; i++){
		cout << " Ingrese el valor del billete numero " << i + 1 << endl;
		cin >> billetera [i];
	//	acumulador = acumulador + billetera [i]; 		
	}
	
	//ciclo de procesamiento
	//se averigua cuanto dinero tiene el usuario en la billetera
	for (int i = 0; i < cantidadBilletes ; i++){
		acumulador = acumulador + billetera [i];
	}
	
	
	//mostrar resultados
	cout << "Billetes ingresados" << endl;
	for (int i = 0; i < cantidadBilletes ; i++){
	cout << "$" << billetera[i] << endl << endl;
}

	cout << "la cantidad total ingresada es $"<< acumulador << endl;

	return 0;
}
