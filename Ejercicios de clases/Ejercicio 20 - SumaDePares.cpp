#include <iostream>

using namespace std;

int main(){

int pares = 0;


for (int i = 0; i <= 20; i++)
{
    if (i % 2 == 0){
        pares = pares + i;
    }
    cout << i <<" " ;
}

cout << endl;
cout << "Total pares: "<< pares << endl;

return 0;
}