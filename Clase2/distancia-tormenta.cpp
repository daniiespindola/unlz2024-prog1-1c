#include <iostream> 
#include <string>

using namespace std;

int main() { 
    //declaro variables
	const float velSonido = 343;
	float segundos, metros;
	
    //solicito datos al usuario
    cout <<" Ingrese segundos transcurridos entre el relampago y el trueno " << endl;
    cin >> segundos;
    
    //calculo
    metros = segundos*velSonido;
    
    //muestro resultado
	cout <<" La tormenta se encuentra a : "<<  metros <<  " metros de distancia " << endl;
	
    return 0;
}