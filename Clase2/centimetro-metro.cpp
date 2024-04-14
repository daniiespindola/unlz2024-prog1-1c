#include <iostream> 
#include <string>

using namespace std;

int main (){
int centimetro = 0;
int metro = 0;

cout << "Ingrese un valor en centimetros" << endl;
cin>> centimetro;
metro = centimetro/100;

cout << "EL VALOR QUE INGRESO EN METROS ES: " << metro << endl;

return 0;


}