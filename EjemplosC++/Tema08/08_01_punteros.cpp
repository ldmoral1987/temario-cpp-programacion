#include <iostream>

using namespace std;

int main ()
{
    int variable = 15;
    int * ptr = &variable;

    cout << "Contenido de la variable: " << variable << endl;
    cout << "Direcci�n de memoria de la variable: " << &variable << endl;
    cout << "Direcci�n de memoria del puntero: " << &ptr << endl;
    cout << "Contenido del puntero: " << ptr << endl;
    cout << "Indirecci�n del puntero: " << *ptr << endl;
}
