#include <iostream> 
#include <string>

using namespace std;

int main() { 
    
	const float velSonido = 343;
	float segundos, metros;
	

    cout <<" Ingrese segundos transcurridos entre el relampago y el trueno " << endl;
    cin >> segundos;
    
    metros = segundos*velSonido;
    
	cout <<" La tormenta se encuentra a : "<<  metros <<  " metros de distancia " << endl;
	
	
	
	
	
	
    return 0;
}