#include <iostream>
using namespace std;
/*Problema 7
*Introducir B, la base y H, la altura de un triángulo y determinar el área
* //@Autor	Andy010409
  //@Date  25 Marzo 2022
*/
int main()
{

    double a, b, r;

    cout << "-*-*-*-*- Introducir B, la base y H, la altura de un triángulo y determinar el área -*-*-*-*-\n";

    cout << "Ingresar el valor de la altura: ";
    cin >> a;
    cout << "\nIngresar el valor de la base: ";
    cin >> b;

    cout << "\nArea:\n";
    r = (a * b )/2;
    cout << r << "\n" << endl;
    return 0;



}
