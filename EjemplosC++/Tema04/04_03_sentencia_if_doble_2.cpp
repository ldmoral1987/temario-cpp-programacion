#include <iostream>

using namespace std;

int main ()
{
    int x = 0, y = 0;

    cout << "Introduce un n�mero entero, x: " << endl;
    cin >> x;
    cout << "Introduce un n�mero entero, y: " << endl;
    cin >> y;

    if (x <= y)
        cout << "x es menor o igual que y" << endl;
    else
        cout << "x es mayor que y" << endl;
}
