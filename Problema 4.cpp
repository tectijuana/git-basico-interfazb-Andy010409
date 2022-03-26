#include <iostream>
using namespace std;
/*
*Problema 4
*Imprimir los números primos del 1000 al 1500
* //@Autor	Andy010409
  //@Date  25 Marzo 2022
*/
int main()
{
    int num1 = 1000;
    int num2 = 1500;
    int fnd = 0, ctr = 0;


    cout << "-*-*-*-*- Imprimir los numeros primos del 1000 al 1500 -*-*-*-*-\n";

    cout << "\n Los numeros primos de  1000 al 1500 son: " ;
    for (int i = num1; i <= num2; i++)
    {
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
                ctr++;
        }
        if (ctr == 0 && i != 1)
        {
            fnd++;
            cout << i << " ";

        }
        ctr = 0;
    }
    return 1;
}

