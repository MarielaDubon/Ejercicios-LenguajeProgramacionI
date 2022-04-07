#include <iostream>

using namespace std;


extern void agregarProducto(string descripcion, int cantidad, double precio);

void productos (int opcion)

{
    system ("cls");

    int opcionProducto = 0;

    switch (opcion)
    {
    case 1:
    {
        cout << "Bebidas calientes"<< endl;
        cout << "*****************"<< endl;
        cout << "1 - Capuccino"<< endl;
        cout << "2 - Expresso"<< endl;
        cout << "3 - Cafe"<< endl;
        cout << endl;

        cout << "Ingrese una opcion: "<<endl;
        cin >> opcionProducto;

        switch (opcionProducto)
        {
        case 1:
            agregarProducto("1 Capuccino - L 40.00", 1, 40);
            break;
        case 2:
            agregarProducto("1 Expresso - L 30.00", 1, 30);
            break;
        case 3:
            agregarProducto("1 Cafe - L 20.00", 1, 20);
            break;
        default:
            {   
                cout <<"OPCION NO VALIDA";
                return;
                break;
            }
        
        cout <<endl;

        cout <<"Producto agregado" <<endl <<endl;
        system ("pause");    
//------------------------------------------------------------------------------------------------------------
break;
        }
            }
        case 2:
        {
        cout << "Bebidas Frias"<< endl;
        cout << "*************"<< endl;
        cout << "1 - Capuccino Supreme"<< endl;
        cout << "2 - Mochas heladas"<< endl;
        cout << "3 - Granita de fruta"<< endl;
        cout << endl;

        cout << "Ingrese una opcion: "<<endl;
        cin >> opcionProducto;

        switch (opcionProducto)
        {
        case 1:
            agregarProducto("1 Capuccino Supreme - L 60.00", 1, 60);
            break;
        case 2:
            agregarProducto("1 Mochas heladas - L 40.00", 1, 40);
            break;
        case 3:
            agregarProducto("1 Granita de fruta - L 50.00", 1, 50);
            break;
        default:
            {   
                cout <<"OPCION NO VALIDA";
                return;
                break;
            }
        
        cout <<endl;

        cout <<"Producto agregado" <<endl <<endl;
        system ("pause");    
        
//------------------------------------------------------------------------------------------------------------
break;
       } 
    }
    case 3:
        {
        cout << "Reposteria"<< endl;
        cout << "**********"<< endl;
        cout << "1 - Pie de Limon"<< endl;
        cout << "2 - Tarta de Chocolate"<< endl;
        cout << "3 - Pastel de Queso"<< endl;
        cout << endl;

        cout << "Ingrese una opcion: "<<endl;
        cin >> opcionProducto;

        switch (opcionProducto)
        {
        case 1:
            agregarProducto("1 Pie de Limon - L 60.00", 1, 60);
            break;
        case 2:
            agregarProducto("1 Tarta de Chocolate - L 40.00", 1, 40);
            break;
        case 3:
            agregarProducto("1 Pastel de Queso - L 50.00", 1, 50);
            break;
        default:
            {   
                cout <<"OPCION NO VALIDA";
                return;
                break;
            }
        
        cout <<endl;

        cout <<"Producto agregado" <<endl <<endl;
        system ("pause");


        }
        }
    }