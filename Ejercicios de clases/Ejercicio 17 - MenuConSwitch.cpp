#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    int opcion = 0;

    while (true){
        system ("cls");
        cout << "****" << endl;
        cout << "MENU" << endl;
        cout << "****" << endl;

        cout << endl;
        cout << " 1 - Cafe y Granitas" << endl;
        cout << " 2 - Reposteria" << endl;
        cout << " 0 - Salir" << endl;

        cout << "Ingrese una opcion del menu: "<<endl;
        cin >> opcion;

           if (opcion == 0){
           break;
        }

        switch (opcion)
        {
            case 1:
            {
                 system ("cls");
                 cout << "Estas en el menu de Cafe y Granitas"<<endl;
                 system ("pause");
                 break;
            }
            case 2: 
            {
                 system ("cls");
                 cout << "Estas en el menu de Reposteria"<<endl;
                 system ("pause");
                 break;
            }
        default:
             {
                 cout << "Ingrese una opcion valida (0, 1, 2)"<<endl;
                 break;
             }
        }
    }
    cout <<endl;
    cout << "Saliste del sistema";
    
	return 0;
}