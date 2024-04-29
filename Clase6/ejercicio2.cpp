/*
contador de pares y contador de impares, 
esperar por pantalla n numeros
contar cantidad de pares ingresados
contar cantidad de impares ingresados 
cortar ciclo cuando se ingrese 0
mostrar valor de contador por pantalla
*/

#include <iostream>
#include <string>

using namespace std; 

int main() {
	//declaro variables
	int num = 0;
	int contadorPar = 0;
	int contadorImpar = 0;
	int sumaPares = 0;
	int sumaImpares = 0;
	
	//uso ciclo do while 
	do{
		cout << "ingrese un numero, si ingresa 0 se termina el programa: " << endl;
		cin >> num;
		
		//if para verificar si es par o impar. validacion distinta a cero para que no lo tome como par
		if (num !=0){
		if (num%2==0){
			contadorPar++;
			sumaPares = num + sumaPares;
			//cout << "impares ingresados " << contadorImpar << " y pares ingresados " << contadorPar  << endl;
		}
	
		else {
			contadorImpar++; 
			sumaImpares = num + sumaImpares;
		//	cout << "impares ingresados " << contadorImpar << " y pares ingresados " << contadorPar  << endl;
		}
		}	
		
	}while (num != 0);//mientras que el num ingresado sea distinto a cero ejecutara el ciclo
	
	//muestro resultados por pantalla
	cout << "impares ingresados " << contadorImpar << " y pares ingresados " << contadorPar  << endl;
	cout << "la suma de los impares ingresados es  " << sumaImpares << " y la suma de los pares ingresados es " << sumaPares << endl;
	cout << "Ingreso 0 finalizo el programa" << endl;
	

return 0;
}
