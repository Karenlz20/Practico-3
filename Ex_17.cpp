#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese n" << endl;
    cin >> n;
    int contador = 0;
    int numero = 2;
    while (contador < n) {
        bool esPrimo = true;
        for (int i = 2; i * i <= numero; i++) {
            if (numero % i == 0) {
                esPrimo = false;
                break;
            }
        }
        if (esPrimo) {
            cout << numero << " ";
            contador++;
        }
        numero++;
    }
    cout << endl;
    return 0;
}
