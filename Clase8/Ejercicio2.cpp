/*Se necesita calcular una proyeccion d ela cotizacion del dolar
con respecto al peso argentino para los proximos 25 años
se sabe que el valor de este año 860
se sabe que el valor del año que viene 2345
se sabe tambien que hay una depresacion del 10% anual
calcular para cada año hasta el 2049 el valor estimado de la cotizacion del dolar
*/

#include <iostream>
#include <string>

using namespace std; 

int main() {
	//DECLARO VARIABLES
	const int anioActual = 2024;
	int cantidadPeriodoAProyectar = 25;
	int proyeccionesDolar [cantidadPeriodoAProyectar];
	
	//carga de datos
	proyeccionesDolar[0] = 860;
	proyeccionesDolar[1] = 2345;
	
	//PROCESAMIENTO
	for (int i = 2; i < cantidadPeriodoAProyectar ; i++ ){
		proyeccionesDolar[i] = proyeccionesDolar[i-1] * 1.10;
	}
	
	//MOSTRAR RESULTADOS
	for (int i = 0; i < cantidadPeriodoAProyectar ; i++ ){
		cout << "Cotizacion del año " << anioActual + i << " : " << proyeccionesDolar[i] << endl;
	}
	
	return 0;

}
