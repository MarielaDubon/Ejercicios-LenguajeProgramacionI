#include <iostream>

using namespace std;

int main(){

int pares = 0;
int impares = 0;

for (int i = 0; i <= 20; i++)
{
    if (i % 2 == 0){
        pares = pares + i;
    }
    else {
    	
    	if (i % 2 !=0){
	
    	   impares += i;
        }
	}
    cout << i <<" " ;
}

cout << endl;
cout << "Total pares: "<< pares << " || Total impares: "<<impares<<endl;

return 0;
}