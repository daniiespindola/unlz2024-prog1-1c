#include <iostream> 
#include <string>

using namespace std;

int main() {
   //declaracion de variables
    int anio = 0;

    //entrada de datos
    cout <<"Ingrese el año a consultar" << endl;
    cin >> anio;

    //condicion
    if (anio % 4 == 0 && anio %100 != 0 || anio%400 == 0)
    {
        cout << "El año es bisiesto" << endl;
    }    
    else 
    {
        cout << "El año no es bisiesto" << endl;
    }    
    
    return 0;
}