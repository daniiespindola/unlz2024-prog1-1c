#include <iostream> 
#include <string>

using namespace std;

int main() {
//declaro variables 
float lados, altura, perimetro, area;
//solicito datos al usuario
cout<<"Ingrese la medida de los lados del triangulo equilatero"<<endl;
cin>>lados;
cout<<"Ingrese la altura del triangulo equilatero"<<endl;
cin>>altura;
//calculos
area = (lados * altura) /2;
perimetro = lados * 3;

//muestro resultados
cout<<"El perimetro del triangulo equilatero es: "<<perimetro<<endl;
cout<<"Y el area es de: " <<area<<endl;

return 0;


}
