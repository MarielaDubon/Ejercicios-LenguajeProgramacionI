#include <iostream>

using namespaces std;

int main()
{
	double subtotal = 0;
	double total = 0;
	double impuesto = 0.15;
	int descuento = 0;
	double calculoDescuento = 0;
	double calculoImpuesto = 0;
	
	cout << "Ingrese el subtotal de la factura: " <<endl;
	cin >> subtotal;
	
	cout << "Ingrese el descuesnto (0, 10, 15, 20)" <<endl;
	cin >> descuento;
	
	calculoDescuento = (subtotal * descuento)/100;
	calculoImpuesto = (subtotal - calculoDescuento)* 0.15;
	total = subtotal + (subtotal * 0.15);
	
	cout << "Total a pagar es: "<<total<<endl;

	
	return 0;
	
}
    