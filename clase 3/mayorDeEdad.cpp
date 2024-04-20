#include <iostream> 
#include <string>

using namespace std;

int main() {
//declaracion de variables
int anio = 0;
int edad = 0;

//ingreso de datos
cout << "Ingrese el año de su nacimiento: " << endl;
cin >> anio;

//calculo
edad = 2024 - anio;

//condicion
if (edad >= 18)
{
    cout << "La persona es mayor de edad" << endl;
}
else
{
    cout << "La persona es menor de edad" << endl;
}



    return 0;
}