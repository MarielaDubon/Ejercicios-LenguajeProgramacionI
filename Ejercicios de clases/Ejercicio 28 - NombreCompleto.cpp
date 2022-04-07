#include <iostream>

using namespace std;

string nombreCompleto(string nombre, string apellido)
{
    return nombre + " " + apellido;
}

int main ()
{
    string primerNombre = " ";
    string primerApellido = " ";

    cout << "Ingrese su primer nombre: ";
    cin >> primerNombre;
    cout << "Ingrese su primer Apellido: ";
    cin >> primerApellido;

    cout <<endl;

    cout << "Nombre completo: " << nombreCompleto(primerNmbre, primerApellido);

    return 0;
}