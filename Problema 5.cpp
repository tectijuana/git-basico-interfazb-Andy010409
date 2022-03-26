#include <iostream>
using namespace std;
/*
*Problema 5
*Generar todos los números primos del período 1972 - 2000
* //@Autor	Andy010409
  //@Date  25 Marzo 2022
*/
int main()
{
    int num1 = 1972;
    int num2 = 2000;
    int fnd = 0, ctr = 0;


    cout << "-*-*-*-*- Generar todos los numeros primos del periodo 1972 - 2000 -*-*-*-*-\n";


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
            cout << i << "\n ";

        }
        ctr = 0;
    }
    return 1;
}

