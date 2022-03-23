#include <iostream>
#include <math.h>

using namespace;

int main(){
    int numero;
    double resultado;

    cout << " Introduce un numero:  " <<endl;
    cin >> numero;

    resultado = sqrt(numero);

    cout << "La raiz de " << numero << "es: " <<resultado;

    return 0;
}