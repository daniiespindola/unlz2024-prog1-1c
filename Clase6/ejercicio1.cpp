//generador de tablas de multiplicar

//ingresar un numero del 1 al 9 mostrar cada uno de sus renglones de su tabla de multiplicar

#include <iostream>
#include <string>

using namespace std; 

int main() {
	int numIngresado = 0;
	int multiplicador = 0;
	int multiplicacion = 0;

	while(numIngresado < 1 || numIngresado > 10){
		cout << "Recuerde que el numero debe ser del 1 al 9 " << endl;
		cout << "Ingrese un numero entero del 1 al 9: " << endl;
		cin >> numIngresado;		
		}


	while(multiplicador <= 10){
			multiplicacion = numIngresado * multiplicador;
			cout << "el num ingresado fue " << numIngresado << " X " << multiplicador << " = " << multiplicacion << endl;
		
			multiplicador ++;
		}

return 0;
}

