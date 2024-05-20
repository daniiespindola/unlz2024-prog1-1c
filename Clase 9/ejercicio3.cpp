#include <iostream>
#include <string>

using namespace std;

const int largo = 10;
int vector[largo];

int solicitarDatos(int vector[], int largo){
	for(int i = 0; i < largo; i++){
	
	cout << "Ingrese 10 enteros" << endl;
	cin >> vector[i];
	
}	
}

void ordenar(int vector[], int largo) {
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




int main() {

	solicitarDatos(vector, largo);
	ordenar(vector, largo);

	cout << "Arreglo ordenado:" << endl;
    for (int i = 0; i < largo; i++) {
        cout << "vector[" << i << "] = " << vector[i] << endl;
    }
}
