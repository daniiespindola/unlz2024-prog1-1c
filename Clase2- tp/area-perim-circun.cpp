#include <iostream> 
#include <string>

using namespace std;

int main() {
//declaro variables 
const double pi=3.14152;
float radio = 0;
float perimetro = 0; 
float area = 0;
//solicito datos al usuario
cout<<"Ingrese el radio de la circunferencia"<<endl;
cin>>radio;
//calculos
perimetro = 2 * pi * radio;
area = pi * (radio * radio);

//muestro resultados
cout<<"El perimetro de la circunferencia es: "<<perimetro<<endl;
cout<<"Y el area del mismo es de: "<<area<<endl;

return 0;


}