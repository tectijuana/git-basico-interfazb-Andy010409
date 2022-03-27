#include<iostream>
using namespace std;
/*Problema 9/25
*Encontrar el mínimo común múltiplo de tres números
* //@Autor	Andy010409
  //@Date  26 Marzo 2022
*/
int main()
{
	int valor;
	int a, b, c;
	int i;
	int mayor, menor1, menor2;
	cout << "-*-*-*-*- Encontrar el minimo comun multiplo de tres numeros -*-*-*-*- \n\n";
	cout << "Introduce  tres enteros positivos :\n" ;
	cin >> a >> b >> c;

	if (b >= a && b >= c)
	{
		mayor = b;
		menor1 = a;
		menor2 = c;
	}
	else if (c >= b && c >= a)
	{
		mayor = c;
		menor1 = b;
		menor2 = a;
	}
	else
	{
		mayor = a;
		menor1 = b;
		menor2 = c;
	}

	if (mayor % menor1 == 0 && mayor % menor2 == 0)
	{
		cout << "El minimo comun multiplo " << a << ", " << b << ", "<< c << " es : " << mayor;
	}
	else if (mayor % menor1 == 0 && mayor % menor2 != 0)
	{
		for (i = 2; i <= menor2; i++)
		{
			valor = mayor * i;
			if (valor % menor2 == 0)
			{
				cout << "El minimo comun multiplo " << a << ", " << b << ", " << c << "es : " << valor;
				break;
			}
		}
	}
	else if (mayor % menor1 != 0 && mayor % menor2 == 0)
	{
		for (i = 2; i <= menor1; i++)
		{
			valor = mayor * i;
			if (valor % menor1 == 0)
			{
				cout << "El minimo comun multiplo " << a << ", " << b << ", " << c << " es : " << valor;
				break;
			}
		}
	}
	else if (mayor % menor1 != 0 && mayor % menor2 != 0)
	{
		for (i = 2; i <= menor1 * menor2; i++)
		{
			valor = mayor * i;
			if (valor % menor1 == 0 && valor % menor2 == 0)
			{
				cout << "El minimo comun multiplo " << a << ", " << b << ", " << c << " es : " << valor;
				break;
			}
		}
	}

	return 0;
}