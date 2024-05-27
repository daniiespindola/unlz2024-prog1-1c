#include <iostream>
#include <string>
using namespace std;

const int filas = 4;
const int columnas = 4;
int vector[filas][columnas];

int main() {
  
  //matriz identidad
   /* for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (i == j) {
                vector[i][j] = 1;
            } else {
                vector[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << vector[i][j] << " | ";
        }
        cout << endl;
    }*/

//matriz inversa a la identidad
/*	for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if ( i + j == columnas -1) {
                vector[i][j] = 1;
            } else {
                vector[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << vector[i][j] << " | ";
        }
        cout << endl;
    }*/
    
    
    	for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if ( i == j || i > j) {
                vector[i][j] = 1;
            } else {
                vector[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << vector[i][j] << " | ";
        }
        cout << endl;
    }
    
    
    
return 0;
}
