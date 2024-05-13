/*En un array de 5 elementos pedirle al usuario que los cargue
cuando el usuario finalice la carga
indicar cual es el mayor numero ingresado 
y la posicion en la que se encuentra
*/

#include <iostream>
#include <string>

using namespace std; 

int main() {
	//declaro variables
	const int largoArray = 5;
	int valores [largoArray];
	int mayor = 0;
	int posicion = 0;
	
	//carga de datos
	for( int i = 0; i < largoArray; i++){
		cout << "Ingrese 5 numeros enteros: " << endl;
		cin >> valores [i];
	}
	
	//procesamiento
	mayor = valores[0];
	posicion = 0;
	for ( int i = 1; i < largoArray; i++){
		 if(valores[i] > mayor){
		 	mayor = valores[i];
		 	posicion = i;
	  }	 
			
	}

	cout << "el mayor es " << mayor << " y su posicion es " << posicion << endl;
return 0;
}
