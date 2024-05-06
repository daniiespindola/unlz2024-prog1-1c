#include <iostream>
#include <string>

using namespace std; 

int main() { 

	const int contador = 10;
	string nombres [contador];
	
	//ciclo de ingreso de datos
	for (int i = 0; i < contador ; i++){
		cout << "Ingrese un nombre para la posicion  " << i << ":" << endl;
		cin >> nombres [i];
		
	}
	

	//procesamiento segundo for
	for (int i = 0; i < contador ; i++){
		//accedemos a cada uno de los valores del array
		cout << nombres [i] << endl;
		
		for( int j = 0 ; j < nombres [i].lenght() ; j++){
			//accedemos a cada uno de los caracteres de la palabra almacenada
			cout << nombres [i][j] << endl;
			if (nombres [i][j] == 'b' || nombres [i][j] == 'B'){
				cout << "tiene una b" << endl ;
				break;
			}
		}
		
	}
	
	//bloque para mostrar resultado 
	
	
	
	
	
	//for para buscar las palabras que empiezan con la letra c
/*	for (int i = 0; i < contador; i++) {
        if (nombres[i][0] == 'c' || nombres[i][0] == 'C') {
            cout << "el nombre ingresado con c es " << nombres[i] << endl;
        }
		
	}*/ 
	
	
	
	//variable.lenght() es una funcion que indica la cantidad de posiciones que tiene la variable string

return 0;
}
