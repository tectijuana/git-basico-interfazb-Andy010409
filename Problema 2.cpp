#include <iostream> 
using namespace std;
/*
*Problema 2 
*Introducir un numero y determinar si se trata de uno primo
* //@Autor	Andy010409
  //@Date  25 Marzo 2022
*/
bool Primo(int n);
int main()
{
    int n;
    int p;
    cout << "-*-*-*-*- Introducir un numero y determinar si se trata de uno primo -*-*-*-*- \n";
    cout << "Ingrese un numero: ";
    cin >> n;
    cout << "Resultado: ";
    if (Primo(n)) cout << "Es primo" << endl;
    else cout << "No es primo" << endl;
}
    bool Primo(int n){
        bool p = true;
        int d = 2;
        if (n < 2) p = false;
        else {
            while (p && d <= sqrt(n)) {
                if (n % d == 0) {
                    p = false;
                }
                d = d + 1;
            }
        }
        return p;
    }
   
