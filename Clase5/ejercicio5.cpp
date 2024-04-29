//
#include <iostream>
#include <string>

using namespace std; 

//Desarrollar un programa que pida al usuario ingresar una contrase√±a, 
//y se repita hasta que ingrese la contrase√±a correcta.
int main() { 
    string contraseniaCorrecta = "123456";
    string contraseniaIngresada = "";

    // do while para que al menos una vez ingrese una clave
    do {
        cout << "Ingrese la contraseÒa: ";
        cin >> contraseniaIngresada;

        if (contraseniaIngresada != contraseniaCorrecta) {
            cout << "ContraseÒa incorrecta. Por favor, intente de nuevo." << endl;
        }

    } while (contraseniaIngresada != contraseniaCorrecta);

    cout << "ContraseÒa correcta" << endl;

    return 0;
}

