#include <iostream> 
#include <string>
#include<cmath>

using namespace std;

int main() { 
     string nombre,apellido, direccion, localidad, provincia, pais;
     int telefono;  
       
    cout <<"Ingrese su nombre: "<<endl;
    cin >> nombre;
    
    cout <<"Ingrese su apellido: "<<endl;
    cin >> apellido;
    
    cout <<"Ingrese su direccion: "<<endl;
    cin >> direccion;
    
    cout <<"Ingrese su localidad: "<<endl;
    cin >> localidad;
    
    cout <<"Ingrese su provincia: "<<endl;
    cin >> provincia;
    
    cout <<"Ingrese su pais de origen: "<<endl;
    cin >> pais;
    
    cout <<"Ingrese su telefono: "<<endl;
    cin >> telefono;
    
    cout<<"Usted completo"<<endl;
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Apellido: "<<apellido<<endl;
    cout<<"Direccion: "<<direccion<<endl;
    cout<<"Localidad: "<<localidad<<endl;
    cout<<"Provincia: "<<provincia<<endl;
    cout<<"Pais: "<<pais<<endl;
    cout<<"Telefono: "<<telefono<<endl;

    return 0;
    	
		
} 