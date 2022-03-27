#include <iostream>
using namespace std;
/*Problema 8/25
*Generar e imprimir el triángulo de Pascal
* //@Autor	Andy010409
  //@Date  26 Marzo 2022
*/
int factorial(int a) {
	int i, s = 1;
	for (i = 1; i <= a; i++) {
		s = s * i;
	}
	return s;

}

int combinacion(int a, int b) {
	return factorial(a) / (factorial(b) * factorial(a - b));
}
int main()
{
	cout << "-*-*-*-*- Generar e imprimir el triangulo de Pascal -*-*-*-*- \n\n";

	int i, j, n = 7;
	for (i = 0; i <= n; i++) {
		for (j = n-i; j >=0; j--) {
			cout << " ";
		}
		for (j = 0; j <=i; j++) {
			cout << combinacion(i,j)<<" ";
		}
		cout << endl;
	}

	return 0;
}

