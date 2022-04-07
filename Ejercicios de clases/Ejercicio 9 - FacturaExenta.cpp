//Factura con descuento, que puede estar exenta o no.
//Mariela Dubon
#include <iostream>

using namespace std; 

int main(int argc, char** argv){
	
	// Datos de entrada
	double subtotal = 0;
	double total = 0;
	double impuesto = 0.15;
	int descuento = 0;
	double calculoDescuento = 0;
	double calculoImpuesto = 0;
	char esExenta;
	
	cout << "Ingrese el subtotal de la factura: " <<endl;
	cin >> subtotal;
	
	cout << "Ingrese el descuento ( 0, 10, 15, 20 )" <<endl;
	cin >> descuento;

	
	cout <<"Esta exenta esta factura? digite s (si) o S(no):" <<endl;
	cin >> esExenta;
	
	// Proceso para saber si la factura esta exenta o no
	
	if (esExenta == 's' || esExenta == 'S')
	//Exenta
	{
		calculoDescuento = (subtotal * descuento)/100;
		total = subtotal - calculoDescuento;
	}
else
    //No exenta
    {
    	calculoDescuento = (subtotal * descuento)/100;
    	calculoImpuesto = (subtotal - calculoDescuento) * 0.15;
		total = subtotal - calculoDescuento + calculoImpuesto;
    	
	}
	// Salida de datos
	
	cout << "Total a pagar es: " <<total<<endl;
	
	return 0;
}