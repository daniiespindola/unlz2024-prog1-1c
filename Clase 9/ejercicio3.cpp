#include <iostream>
#include <string>

using namespace std;

const int largo = 10;
int vector[largo];

void solicitarDatos(){
	for(int i = 0; i < largo; i++){
	
	cout << "Ingrese 10 enteros" << endl;
	cin >> vector[i];
	
}	
}

void ordenar() {
    int aux = 0;
    for (int i = 0; i < largo; i++) {
        for (int j = 0; j < largo; j++) {
            if (vector[i] < vector[j]) {
                // Intercambiar elementos
               aux = vector[i];
                vector[i] = vector[j];
                vector[j] = aux;
            }
        }
    }
}

void mostrarResultado(){
	cout << "Arreglo ordenado:" << endl;
    for (int i = 0; i < largo; i++) {
        cout << "vector[" << i << "] = " << vector[i] << endl;
    }
}


int main() {

	solicitarDatos();
	ordenar();
	mostrarResultado();

	
}
