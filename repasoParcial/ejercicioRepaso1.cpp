/*
busqueda de un nro en un array
la definicion de un array que cobntenga enteros
que este array sea cargado por el usuario
que se le solicite al usuario buscar uno de los valores ingresados

informar si el valor fue encontrado
y en caso de ser asi indicar su ubicacion

*/

#include <iostream>
#include <string>

using namespace std;



int seleccion(){
	const int cantidad = 5;
	int valoresArray [cantidad];
	
	
	for(int i = 0; i < cantidad; i ++){
		cout << "Ingrese de a uno los valores del array: " << endl;
		cin >> valoresArray [i];
		
	}
	
	int valorBuscado = 0;
	cout << "Ingrese que valor del array desea encontrar" << endl;
	cin >> valorBuscado;
	
	bool encontrar = false;
	int posicion = 0;
	
	for(int i = 0; i < cantidad; i ++){
		
		if (valorBuscado == valoresArray [i] ){
			
			encontrar = true;
			posicion = i+1;
		}
		
	}
	
	if (encontrar == true){
	  	cout << "-----------------------------------------------" << endl << endl;
        cout << "El valor " << valorBuscado << " fue encontrado en la posicion " << posicion << " del array." << endl;
    } else {
        cout << "El valor no fue encontrado en el array." << endl;
    }
    
	return 0;
	
}

int main(){

	const int cantidad = 5;
	int valoresArray [cantidad];
	
	//se pide cargar el array
	for(int i = 0; i < cantidad; i ++){
		cout << "Ingrese de a uno los valores del array: " << endl;
		cin >> valoresArray [i];
	}
	
	//se muestra valores guardados
	for(int i = 0; i < cantidad; i ++){
		cout << valoresArray [i] << " | " ;
	
	}
	
	
	//se ordena de mayor a menor asignando un auxiliar
	int aux = 0;
	for(int i = 0; i < cantidad; i ++){
		for(int j = 0; j < cantidad; j ++){
		    if (valoresArray[i] < valoresArray[j]) {
               aux = valoresArray[i];
                valoresArray[i] = valoresArray[j];
                valoresArray[j] = aux;
            }
	}
	}
	
	cout << "Queda ordenado de mayor a menor de la siguiente manera: " << endl;

	//se muestra el array ya ordenado
	for (int i = 0; i < cantidad; i++) {
        cout << "El lugar[" << i << "] = " << valoresArray[i] << endl;
    }
    
    return 0;
}



