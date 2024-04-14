#include <iostream> 
#include <string>

using namespace std;


int main() { 
    
    int numero = 0;
    int numero2 = 0;
    
    cout << "ingrese un numero" << endl;
    
    cin >> numero;
    cout << "ingrese otro numero" << endl; 

    cin >> numero2;

    if (!(numero == numero2 || numero == 0)){
        cout << "los numeros son iguales"<<endl;
    }
	 else{
        cout << "los numeros son distintos"<<endl;
    }
    /*
    && and 
    || or
    ! negacion
	*/
		cout << "el primer numero cargado fue ";
		cout << numero <<endl;
		
		numero = numero + 4;

	cout << "el nuevo numero es: ";
	cout << numero <<endl;
		
    /*
    endl salta a la otra linea, como un enter
    cout muestra por pantalla
    cin ingreso por pantalla
    igual ==
    mayor >
    menor <
    menor o igual <=
    mayor o igual =>
    distinto !=
    
    */
    
    
    
    
    return 0;
}
