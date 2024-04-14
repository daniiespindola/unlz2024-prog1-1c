#include <iostream> 
#include <string>

using namespace std;

int main() {
    //declaro variables
    int base = 0;
    int altura = 0;
    int area = 0;
    int perimetro = 0;

    //solicito datos al usuario
    cout << "INGRESE ALTURA DEL RECTANGULO"<< endl;
    cin>>altura;
    cout << "INGRESE AHORA LA BASE DEL MISMO"<< endl;
    cin>>base;
    //calculos
    area = altura * base;
    perimetro = 2*(altura+base);

    //mostrar resultados
    cout << "el area del mismo es: "<<area << endl;
    cout << "el perimetro del mismo es: " << perimetro << endl;
    return 0;


}