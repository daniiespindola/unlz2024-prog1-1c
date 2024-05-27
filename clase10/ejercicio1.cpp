#include <iostream>
#include <string>

using namespace std;

const int filas = 4;
const int columnas = 4;
int vector [filas][columnas];


int main (){
	
	/*for (int i = 0; i < filas ; i++){
		for (int j = 0; j < columnas ; j++){
			vector [i][j] = i + 10;
		} 
	}
	
	for (int i = 0; i < filas ; i++){
		for (int j = 0; j < columnas ; j++){
		cout << "Valor de i (filas) " << i << endl;
		cout << "Valor de j (columnas) " << j << endl;
		} 
	}*/
	

//forma de ver las columnas y filas de un vector
	for (int i = 0; i < filas ; i++){
		for (int j = 0; j < columnas ; j++){
		//	vector [i][j] = i + j;		
			cout << i << " " << j << " | ";
			//cout << vector [i][j] << " | ";
		} 
		cout << endl;
	}
	


}
