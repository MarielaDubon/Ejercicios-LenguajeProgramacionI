#include <iostream>
// Programa notas completas
// Mariela Dubon
using namespace std;

int main() {
	
	int nota = 0;
	
	cout << "Ingrese la nota del estudiante: " <<endl;
	cin >> nota;
	
	if (nota > 100 || nota < 0){
		cout << "Ingrese una nota entre 0 - 100";
		return 0 ;
	}
	
	if (nota >= 96 && nota <= 100 ){
		cout << " Obtuvo una nota A++";
	}
	
	if (nota >= 91 && nota <= 95){
		cout << " Obtuvo una nota A+";
	}
	
	if (nota >= 86 && nota <= 90){
		cout << " Obtuvo una nota A";
	}
	
	if (nota >= 81 && nota <= 85){
		cout << " Obtuvo una nota A-";
	}
	
	if (nota >= 76 && nota <= 80){
		cout << " Obtuvo una nota B+";
	}
	
	if (nota >= 71 && nota <= 75){
		cout << " Obtuvo una nota B";
	}
	
	if (nota >= 66 && nota <= 70){
		cout << " Obtuvo una nota B-";
	}
	
	if (nota >= 61 && nota <= 65){
		cout << " Obtuvo una nota C";
	}
	
	if (nota >= 56 && nota <= 60){
		cout << " Obtuvo una nota C";
	}
	
	if (nota >= 51 && nota <= 55){
		cout << " Obtuvo una nota C-";
	}
	
	if (nota >= 46 && nota <= 50){
		cout << " Obtuvo una nota D+";
	}
	
	if (nota >= 41 && nota <= 45){
		cout << " Obtuvo una nota D";
	}
	
	if (nota >= 36 && nota <= 40){
		cout << " Obtuvo una nota D-";
	}
	
	if (nota >= 31 && nota <= 35){
		cout << " Obtuvo una nota E+";
	}
	
	if (nota >= 26 && nota <= 30){
		cout << " Obtuvo una nota E";
	}
	
	if (nota >= 21 && nota <= 25){
		cout << " Obtuvo una nota E-";
	}
	
	if (nota >= 16 && nota <= 20){
		cout << " Obtuvo una nota F+";
	}
	
	if (nota >= 11 && nota <= 15){
		cout << " Obtuvo una nota F";
	}
	
	if (nota >= 6 && nota <= 10){
		cout << " Obtuvo una nota F";
	}
	
	if (nota >= 1 && nota <= 5){
		cout << " Obtuvo una nota F-";
	}
	
	if (nota = 0 ){
		cout << " Obtuvo una nota F--";
	}
	
	return 0;
}