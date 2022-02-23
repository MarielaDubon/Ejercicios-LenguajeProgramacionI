#include <iostream>

// Programa Suma, Resta, Multiplicacion y Division. 
using namespace std;

int main() {
	// Asignacion de variables
	int a = 0;
	int b = 0;
	int TotalSuma = 0, TotalResta = 0, TotalMulti = 0;
	double TotalDivision = 0;
	
	cout<< "Ingrese el valor de a: ";
	cin >> a;
	
	cout<< "Ingrese el valor de b: ";
	cin >> b;
	
	TotalSuma = a + b;
	TotalResta = a - b;
	TotalMulti = a * b;
	TotalDivision = a / b;
	
	cout<< "La suma de a + b es: " <<TotalSuma<<endl;
	cout<< "La resta de a + b es: " <<TotalResta<<endl;
	cout<< "La multiplicacion de a + b es: " <<TotalMulti<<endl;
	cout<< "La division de a + b es: " <<TotalDivision<<endl;
	
	
	return 0;
}