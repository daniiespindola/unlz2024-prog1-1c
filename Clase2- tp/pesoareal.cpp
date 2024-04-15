#include <iostream> 
#include <string>

using namespace std;

int main (){
    //declaro variables
    long cotizacionReal, pesos, conversionFinal;

    //solicito datos al usuario
    cout<<"ingrese la cotizacion actual del real en pesos argentinos"<<endl;
    cin>>cotizacionReal;
    cout<<"indique ahora la cantidad de pesos a convertir a reales"<<endl;
    cin>>pesos;

    //calculo
     conversionFinal = pesos*cotizacionReal;

    //muestro resultados
    cout<< "La cantidad de pesos a convertir es: " << pesos <<endl;
    cout<< "que a precio de reales equivale a: " << conversionFinal <<endl;



    return 0;
}