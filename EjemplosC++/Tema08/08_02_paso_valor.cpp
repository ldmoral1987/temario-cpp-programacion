#include <iostream>

using namespace std;

int multiplicar (int variable, int multiplicando)
{
    variable = variable * multiplicando;
    return variable;

}

int main ()
{
    int variable = 15;

    cout << "Variable: " << variable << endl;
    cout << "Multiplicaci�n: " << multiplicar (variable, 2)<< endl;
    cout << "Variable (despu�s de multiplicaci�n): " << variable << endl;
}
