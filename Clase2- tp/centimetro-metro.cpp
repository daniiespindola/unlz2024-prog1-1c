#include <iostream> 
#include <string>

using namespace std;

int main (){
//declaro variables
int centimetro = 0;
int metro = 0;

//solicito y guardo datos
cout << "Ingrese un valor en centimetros" << endl;
cin>> centimetro;

//calculo
metro = centimetro/100;

//resultado final
cout << "EL VALOR QUE INGRESO EN METROS ES: " << metro << endl;

return 0;


}