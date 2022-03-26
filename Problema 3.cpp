#include <iostream>
/*
*Problema 3
*Introducir un número N y enlistar enseguida todos los números primos menores o iguales a él
* //@Autor	Andy010409
  //@Date  25 Marzo 2022
*/

using namespace std;


int main()
{
    int n;
    cout << "Ingrese un numero:\n";
    cin >> n;

    cout << "Lista de numeros primos:\n";
    for (int i = 2; i < n; i++) {
        int creciente = 2;
        bool primo = true;
        while (primo && creciente < i) {
            if (i % creciente == 0) {
                primo = false;
            }
            else {
                creciente++;
            }
        }
        if (primo) {
            cout << i<<" " << endl;
        }
    }
 

    
}
