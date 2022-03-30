#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include <string.h>
#include <string.h>
#include <time.h>

using namespace std;

int main (void)
{
    int d1, d2;
    int i;
    srand(time(NULL));
    cout << "Los dos numeros deben ser iguales "<< endl;
    cout << "#Tirada d1      d2"<<endl;

    i = 1;
    while ( 5 == 5)
    {
        d1 = 1 + rand() % 6;
        d2 = 1 + rand() % 6;
        cout << setw(4) <<i <<setw(8) << d1 <<setw(4) << d2 << endl;

        if (d1 == d2)
        { break; }
        i++;
    }

    cout << "En " << i << "tiradas, son iguales" << endl <<endl;
    cout << "Oprima una tecla..." << endl;         getch();

    cout << "#Tirada d1      d2"<< endl;
    i = 1;
    while ( 1 == 1)
    {
        d1 = 1 + rand() % 6;
        d2 = 1 + rand() % 6;
        cout << setw(4) <<i <<setw(8) << d1 <<setw(4) << d2 << endl;
        if ( d1 == 6 && d2 == 6)   
        { break; }
    i++;
    }
    cout << "En " << i << " tiradas, son iguales a 6" << endl <<endl; 
    cout << "Proceso terminado, oprima una tecla...";
    
    getch();

    return 0;
}
