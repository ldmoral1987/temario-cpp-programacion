#include <iostream>

using namespace std;

int main ()
{
    int x = 0;

    cout << "Introduce un n�mero" << endl;
    cin >> x;

    switch (x)
    {
        case 1:
            cout << "Uno" << endl;
            break;

        case 2:
            cout << "Dos" << endl;
            break;

        case 3:
            cout << "Tres" << endl;
            break;

        default:
            cout << "Fuera de rango" << endl;
            break;
    }
}
