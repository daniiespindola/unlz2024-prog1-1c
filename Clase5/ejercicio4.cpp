#include <iostream>
#include <string>

using namespace std; 

//Implementar un juego de adivinanzas en el que el usuario tenga que adivinar un número secreto. 
//El ciclo while se repetirá hasta que el usuario adivine el número correcto
int main() { 
//declaro variables
int num = 0;
int numSecreto = 33;

//mediante while se le pide al usuario ingresar datos
while (num != numSecreto)
{
    cout << "ADIVINE EL NUMERO SECRETO, ES UN NUMERO ENTERO ENTRE EL 1 Y EL 100" << endl;
    cin >> num; 
    //cout << "intente nuevamente" << endl;
}

cout << "Ha ganado el numero secreto era " << num << endl;

return 0;

} 
