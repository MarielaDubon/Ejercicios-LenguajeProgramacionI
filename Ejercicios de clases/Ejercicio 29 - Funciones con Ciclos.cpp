#include <iostream>

using namespace std;

void imprimirCaracter(char caracter, int ciclos)
{
    for (int i = 0; i < ciclos; i++)
    {
        cout << caracter;
    }
   cout << endl;
}

int main()
{
    imprimirCaracter('@', 10);
    imprimirCaracter('#', 5);
    cout << "Hola Mundo" <<endl;
    imprimirCaracter('*', 1000);
    return 0;
}