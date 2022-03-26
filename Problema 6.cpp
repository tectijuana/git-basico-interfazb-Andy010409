#include <iostream>
using namespace std;
/*
*Problema 6
*Introducir las longitudes de los lados de un triángulo encontrar el perímetro
* //@Autor	Andy010409
  //@Date  25 Marzo 2022
*/
int main()
{

    double a, b, c, r;

    cout << "-*-*-*-*- Introducir las longitudes de los lados de un triángulo encontrar el perimetro -*-*-*-*-\n";

    cout << "Ingresar el valor del lado a: ";
    cin >> a;
    cout << "\nIngresar el valor del lado b: ";
    cin >> b;
    cout << "\nIngresar el valor del lado c: ";
    cin >> c;

    cout << "\nPerimetro:\n";
    r = a + b + c;
    cout << r<<"\n"<<endl;
    return 0;



}
