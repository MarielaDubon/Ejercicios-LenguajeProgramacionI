#include <iostream>

using namespaces std;

int main()
{
	double subtotal = 0;
	double total = 0;
	
	cout << "Ingrese el subtotal de la factura: " <<endl;
	cin >> subtotal;
	
	
	total = subtotal + (subtotal * 0.15);
	
	cout << "Total a pagar es: "<<total<<endl;

	
	return 0;
	
}
    
    