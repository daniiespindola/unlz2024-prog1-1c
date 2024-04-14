#include <iostream> 
#include <string>

using namespace std;

int main (){
    long cotizacionReal = 0;
    long pesos = 0;
    long conversionFinal;
    cout<<"ingrese la cotizacion actual del real en pesos argentinos"<<endl;
    cin>>cotizacionReal;
    cout<<"indique ahora la cantidad de pesos a convertir a reales"<<endl;
    cin>>pesos;

     conversionFinal = pesos*cotizacionReal;

    cout<< "La cantidad de pesos a convertir es: " << pesos <<endl;
    cout<< "que a precio de reales equivale a: " << conversionFinal <<endl;



    return 0;
}