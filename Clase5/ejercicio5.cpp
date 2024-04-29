//
#include <iostream>
#include <string>

using namespace std; 

//Desarrollar un programa que pida al usuario ingresar una contraseña, 
//y se repita hasta que ingrese la contraseña correcta.
int main() { 
    string contraseniaCorrecta = "123456";
    string contraseniaIngresada = "";

    // do while para que al menos una vez ingrese una clave
    do {
        cout << "Ingrese la contrase�a: ";
        cin >> contraseniaIngresada;

        if (contraseniaIngresada != contraseniaCorrecta) {
            cout << "Contrase�a incorrecta. Por favor, intente de nuevo." << endl;
        }

    } while (contraseniaIngresada != contraseniaCorrecta);

    cout << "Contrase�a correcta" << endl;

    return 0;
}

