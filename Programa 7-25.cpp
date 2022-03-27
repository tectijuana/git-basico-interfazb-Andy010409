#include <stdio.h> 
#include <windows.h>  
#include <time.h>  
using namespace std;
/*Problema 7/25
*Convertir un entero positivo de cualquier base a base 10
* //@Autor	Andy010409
  //@Date  26 Marzo 2022
*/

void ordenar(int x[]);

int main() {
    int c,lista[30],ord;
    srand(time(NULL));
     printf("-*-*-*-*- Convertir un entero positivo de cualquier base a base 10 -*-*-*-*- \n");
    for(c = 0; c <= 29; c++) 
    {
        lista[c] = rand() %5;
        printf("%d",lista[c]);
    }
    printf("Resultado: \n\n");
    ordenar( lista);

    
}
void ordenar(int x[])
{
    int c1, c2,c3, aux;
    for (c1 = 0; c1 <= 29; c1++)
    {
        for (c2 = 0; c2 < 29; c2++)
        {
            if (x[c2] > x[c2 + 1])
            {
                aux = x[c2];
                x[c2] = x[c2 + 1];
                x[c2 + 1] = aux;
            }
        }

    }
    for (c3 = 0; c3 <= 29; c3++)
    {
        printf("%d",x[c3]);
    }

}