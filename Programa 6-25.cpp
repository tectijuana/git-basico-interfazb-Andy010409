#include <iostream> 
using namespace std;
/*Problema 6/25
*Hacer que la computadora convierte números en base 10 a base 8
* //@Autor	Andy010409
  //@Date  26 Marzo 2022
*/
void octal(int x) {
    if (x > 7) {
        octal(x / 8);
    }
    cout << x % 8;
}
int main() {
    int n;
    cout << "-*-*-*-*- Hacer que la computadora convierte números en base 10 a base 8-*-*-*-*- \n";
    cout << "Ingrese un numero entero: ";
    cin >> n;
    cout << "Resultado: ";
    octal(n);


    return 0;
