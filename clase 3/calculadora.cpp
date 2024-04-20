#include <iostream> 
#include <string>

using namespace std;

int main() {
   //declaracion de variables 
    float num1 = 0;
    float num2 = 0;
    float suma = 0;
    float resta = 0;
    float multiplicacion = 0;
    float division = 0;
    int opcion = 0;

    //entrada de datos
    cout << "ingrese el primer numero: " << endl;
    cin >> num1;
    cout << "ingrese el segundo numero: " << endl;
    cin >> num2;

    cout << "**INGRESE LA OPERACION QUE DESEA RELIZAR**" << endl;
    cout <<"1.Suma" << endl;
    cout << "2.Resta" << endl;
    cout << "3.Multiplicacion" << endl;
    cout << "4.Division" << endl;
    cout << "5.Salir" << endl;
    cin >> opcion;

    //switch
    switch (opcion)
    {
    case 1:
            suma = num1 + num2;
            cout << "Elegiste opcion " << opcion << " y el resultado es " << suma << endl;
        break;

    case 2:
        resta = num1 - num2;
        cout << "Elegiste opcion " << opcion << " y el resultado es " << resta << endl;
        break;

    case 3:
        multiplicacion = num1 * num2;
        cout << "Elegiste opcion " << opcion << " y el resultado es " << multiplicacion ;
        break;

    case 4:
        division = num1 / num2;
        cout << "Elegiste opcion " << opcion << " y el resultado es " << division << endl; 
        break;        
    
    default:
        cout << "La opcion elegida ES ERRONEA" << endl;
        break;
    }

    
    return 0;
}