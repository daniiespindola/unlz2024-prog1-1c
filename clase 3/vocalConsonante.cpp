#include <iostream> 
#include <string>

using namespace std;

int main() {
    //declaracion de variables
    char letra;

    //entrada de datos
    cout << "ingrese una letra: " << endl;
    cin >> letra;

    // Conversión de la letra a minuscula
    letra = tolower(letra);

    //switch
    switch (letra)
    {
    case 'a':
        cout << "la letra es vocal" << endl;
        break;
    case 'e':
        cout << "la letra es vocal" << endl;
        break;
    case 'i':
        cout << "la letra es vocal" << endl;
        break;
    case 'o':
        cout << "la letra es vocal" << endl;
        break;
    case 'u':
        cout << "la letra es vocal" << endl;
        break;                
    
    default:
        cout << "la letra es una consonante" << endl;
        break;
    }
   
    return 0;
}
