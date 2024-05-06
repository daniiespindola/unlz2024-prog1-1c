#include <iostream>
#include <string>

using namespace std; 

int main() {
	
	int limite = 15;
	int acumulador = 0;
	
	cout << "Instruccion antes de ingresar al ciclo for " << endl;
	for (int i = 0; i < limite ; i++ ){
		
		acumulador = acumulador + i;
		cout << "valor del contador " << i << endl;
	}
	
	cout << "valor del acumulador " << acumulador << endl;

	return 0;
}

//
