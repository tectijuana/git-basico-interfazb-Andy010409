#include <iostream> 
using namespace std;
void octal(int x){
    if (x > 7) {
        octal(x / 8);
    }
    cout << x % 8;
}
int main() {
    int n;
    cout << "-*-*-*-*- Convertir de Base 10 a 8 -*-*-*-*- \n";
    cout << "Ingrese un numero: ";
    cin >> n;
    cout << "Resultado: ";
    octal(n);

    return 0;
}