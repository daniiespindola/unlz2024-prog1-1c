#include <iostream>
#include <string>

using namespace std;

int main() {
    // Declarar variables
    string nombre, apellido, direccion, localidad, provincia, pais, telefono;
    int edad, altura;

    // Solicitar datos al usuario
    cout << "Ingrese su nombre completo: " << endl;
    getline(cin, nombre);

    cout << "Ingrese su apellido: " << endl;
    getline(cin, apellido);

    cout << "Ingrese su edad: " << endl;
    cin >> edad;

    cout << "Ingrese la calle donde vive y luego la altura: " << endl;
    cin.ignore();
    getline(cin, direccion);
    cin >> altura;

    cout << "Ingrese su localidad: " << endl;
    getline(cin, localidad);

    cout << "Ingrese su provincia: " << endl; 
    getline(cin, provincia);

    cout << "Ingrese su país de origen: " << endl;
    cin.ignore(); 
    getline(cin, pais);

    cout << "Ingrese su teléfono: " << endl;
    cin >> telefono;

    // Mostrar los resultados ingresados
    cout << "Usted completó" << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Apellido: " << apellido << endl;
    cout << "Edad: " << edad << endl;
    cout << "Dirección: " << direccion << " " << altura << endl;
    cout << "Localidad: " << localidad << endl;
    cout << "Provincia: " << provincia << endl;
    cout << "País: " << pais << endl;
    cout << "Teléfono: " << telefono << endl;

    return 0;
}