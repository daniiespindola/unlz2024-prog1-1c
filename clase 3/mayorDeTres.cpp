#include <iostream> 
#include <string>

using namespace std;

int main() {
//declaracion de variables
int num1 = 0;
int num2 = 0;
int num3 = 0;

//entrada de datos
cout << "Ingrese tres numeros, uno a la vez seguidos de enter: " << endl;
cin >> num1 >> num2 >> num3;

//condicion
if (num1 > num2 && num1 > num3)
    {
    cout << "El numero mayor es " << num1 << endl;
    }
    else if (num2 > num1 && num2 > num3)
    {
         cout << "El numero mayor es " << num2 << endl;
    }
    else 
    {
        cout << "el mayor es " << num3;
    }




    return 0;
}
