#include <iostream>
#include <cstdio>

struct Persona
{
    char nombre[30];
    int id;
    float nota;
};

using namespace std;

int main ()
{
   Persona pepito;
   Persona * ptr = &pepito;

   cout << "Nombre del estudiante: ";
   gets(pepito.nombre);

   cout << "Id. del estudiante: ";
   cin >> pepito.id;

   cout << "Nota del estudiante: ";
   cin >> pepito.nota;

   cout << "Datos introducidos: " << endl;
   cout << "====================" << endl;
   cout << ptr->nombre << endl;
   cout << ptr->id << endl;
   cout << ptr->nota << endl;
}

