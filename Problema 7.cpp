#include <iostream>
using namespace std;
/*
*Problema 7
*Introducir las longitudes de los tres lados de un triángulo y determinar el área
* //@Autor	Andy010409
  //@Date  25 Marzo 2022
*/
int main()
{

    double a, b, r;

    cout << "-*-*-*-*- Introducir las longitudes de los lados de un triángulo y determinar el área -*-*-*-*-\n";

    cout << "Ingresar el valor de la altura: ";
    cin >> a;
    cout << "\nIngresar el valor de la base: ";
    cin >> b;

    cout << "\nArea:\n";
    r = (a * b )/2;
    cout << r << "\n" << endl;
    return 0;



}
