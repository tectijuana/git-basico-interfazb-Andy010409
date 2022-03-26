#include <iostream>
#include<math.h>
using namespace std;
/*
*Problema 1
*Encontrar todos los primos entre 2 y 200
* //@Autor	Andy010409
  //@Date  25 Marzo 2022
*/
int main()
{
    int num1, num2;
    int fnd = 0, ctr = 0;
    num1 = 2;
    num2 = 200;

    cout << "-*-*-*-*- Encontrar todos los primos entre 2 y 200 -*-*-*-*-\n";

    cout << "\n Los numero primos entre " << num1 << " y " << num2 << " son:" << endl;
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