#include <iostream>

using namespace std;

int main ()
{
    int x = 0;

    cout << "Introduce un n�mero entero, x: " << endl;
    cin >> x;

    if (x >= 0)
        cout << "El n�mero es mayor o igual a 0" << endl;
    else if (x < 0)
        cout << "El n�mero es menor que 0" << endl;
    else
        cout << "El n�mero es igual a 0" << endl;
}
