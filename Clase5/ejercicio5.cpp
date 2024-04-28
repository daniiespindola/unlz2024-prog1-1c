//
#include <iostream>
#include <string>

using namespace std; 

//Desarrollar un programa que pida al usuario ingresar una contraseña, 
//y se repita hasta que ingrese la contraseña correcta.
int main() { 
    string contraseñaCorrecta = "123456";
    string contraseñaIngresada;

    // do while para que al menos una vez ingrese una clave
    do {
        cout << "Ingrese la contraseña: ";
        cin >> contraseñaIngresada;

        if (contraseñaIngresada != contraseñaCorrecta) {
            cout << "Contraseña incorrecta. Por favor, intente de nuevo." << endl;
        }

    } while (contraseñaIngresada != contraseñaCorrecta);

    cout << "Contraseña correcta" << endl;

    return 0;
}