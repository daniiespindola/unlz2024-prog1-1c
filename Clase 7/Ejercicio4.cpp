//pedir por pantalla 5 valores y guardarlos en un array
//mostrar la posicion que corresponde a los nros impares 
//mostrar por pantalla los que sean divisibles por 3

#include <iostream>
#include <string>

using namespace std; 

int main() { 
	const int contador = 5;
	int valores [contador];
	int contadorImpares = 0;
	int contadorMultiplos = 0;
	
	for (int i = 0; i < contador; i ++){
		cout << "Ingrese el valor correspondiente a la posicion " << i << ":" << endl;
		cin >> valores [i];
		
	}
	
	for (int i = 0; i < contador; i ++){
	if (valores [i] % 2 != 0){
		cout << "el numero ingresado " << valores [i] << " es impar" << endl;
		contadorImpares ++;
		}
		
	if (valores [i] % 3 == 0){
			cout << "el numero ingresado " << valores [i] << " es divisible por 3" << endl;
			contadorMultiplos ++;
		}
	else {
		cout << "El nro ingresado " << valores [i] << " no es impar ni divisible por 3" << endl;
	}
	}	
	
	cout << "La cantidad de impares es "<< contadorImpares << endl;
	cout << "La cantidad de multiplos de 3 es "<< contadorMultiplos << endl;
	
	return 0;
}





