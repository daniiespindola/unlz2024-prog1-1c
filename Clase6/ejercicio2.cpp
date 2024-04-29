//contador de pares y contador de impares, 
//esperar por pantalla n numeros
//contar cantidad de pares ingresados
//contar cantidad de impares ingresados 
//cortar ciclo cuando se ingrese 0
//mostrar valor de contador por pantalla


#include <iostream>
#include <string>

using namespace std; 

int main() {
	int num = 0;
	int contadorPar = 0;
	int contadorImpar = 0;
	
	
	do{
		cout << "ingrese un numero, si ingresa 0 se termina el programa: " << endl;
		cin >> num;
		
		if (num !=0){
		if (num%2==0){
			contadorPar++;
			//cout << "impares ingresados " << contadorImpar << " y pares ingresados " << contadorPar  << endl;
		}
	
		else {
			contadorImpar++; 
		//	cout << "impares ingresados " << contadorImpar << " y pares ingresados " << contadorPar  << endl;
		}
		}	
		
	}while (num != 0);
	
	cout << "impares ingresados " << contadorImpar << " y pares ingresados " << contadorPar  << endl;
	cout << "Ingreso 0 finalizo el programa" << endl;
	

return 0;
}
