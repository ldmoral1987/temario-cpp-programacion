#include <iostream>

using namespace std;

int main ()
{
    int calificacion = 0;

    cout << "Introduce la calificaci�n (0-10): " << endl;
    cin >> calificacion;

    if (calificacion >= 5)
        cout << "El alumno est� aprobado" << endl;
    else
        cout << "El alumno est� suspenso" << endl;
}
