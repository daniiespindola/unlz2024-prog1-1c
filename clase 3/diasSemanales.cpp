#include <iostream> 
#include <string>

using namespace std;

int main() {
//declaracion de variables
int opcion = 0;
string dia;

//entrada de datos
cout << "Ingrese un numero del 1 al 7 " << endl;
cin >> opcion;

//switch
switch (opcion)
{
case 1:
    dia = "lunes";
    cout << "El dia ingresado es el lunes" << endl;
    break;
case 2:
    dia = "martes";
    cout << "El dia ingresado es el martes" << endl;
    break;
case 3:
    dia = "miercoles";
    cout << "El dia ingresado es el miercoles" << endl;
    break;
case 4:
    dia = "jueves";
    cout << "El dia ingresado es el jueves" << endl;
    break;
case 5:
    dia = "viernes";
    cout << "El dia ingresado es el viernes" << endl;
    break;
case 6:
    dia = "sabado";
    cout << "El dia ingresado es el sabado" << endl;
    break;
case 7:
    dia = "domingo";
    cout << "El dia ingresado es el domingo" << endl;
    break;

default:
    cout << "el valor ingresado es erroneo, ingrese uno del 1 al 7" << endl;
    break;
}

    return 0;
}