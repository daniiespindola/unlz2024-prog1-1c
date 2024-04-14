#include <iostream> 
#include <string>
#include<cmath>

using namespace std;

int main() { 
    //declaro variables
     string nombre,apellido, direccion, localidad, provincia, pais, telefono;
     int edad, altura;
       
    //solicito dqatos al usuario   
    cout <<"Ingrese su nombre: "<<endl;
    cin >> nombre;
    
    cout <<"Ingrese su apellido: "<<endl;
    cin >> apellido;

    cout <<"Ingrese su edad: "<<endl;
    cin >> edad;
    
    cout <<"Ingrese calle donde vive y luego la altura: "<<endl;
    cin >> direccion;
    cin >> altura;
    
    cout <<"Ingrese su localidad: "<<endl;
    cin >> localidad;
    
    cout <<"Ingrese su provincia: "<<endl;
    cin >> provincia;
    
    cout <<"Ingrese su pais de origen: "<<endl;
    cin >> pais;
    
    cout <<"Ingrese su telefono: "<<endl;
    cin >> telefono;


    //muestro resultados ingresados
    cout<<"Usted completo"<<endl;
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Apellido: "<<apellido<<endl;
    cout<<"Edad: "<<edad<<endl;
    cout<<"Direccion: "<<direccion<< " " <<altura<<endl;
    cout<<"Localidad: "<<localidad<<endl;
    cout<<"Provincia: "<<provincia<<endl;
    cout<<"Pais: "<<pais<<endl;
    cout<<"Telefono: "<<telefono<<endl;

    return 0;
    	
		
} 