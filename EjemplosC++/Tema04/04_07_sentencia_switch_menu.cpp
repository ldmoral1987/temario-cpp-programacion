#include <iostream>

using namespace std;

int main ()
{
    int opcion = 0;

    cout << "Elige una de las siguientes opciones: " << endl;
    cout << " 1. Opci�n 1" << endl;
    cout << " 2. Opci�n 2" << endl;
    cout << " 3. Opci�n 3" << endl;
    cout << " - Introduce la opci�n elegida: ";
    cin >> opcion;

    switch (opcion)
    {
        case 1:
            cout << "Opci�n Uno" << endl;
            break;

        case 2:
            cout << "Opci�n Dos" << endl;
            break;

        case 3:
            cout << "Opci�n Tres" << endl;
            break;

        default:
            cout << "Opci�n desconocida" << endl;
            break;
    }
}
