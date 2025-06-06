#include <iostream>
#include <string>
using namespace std;

int main() {
    int numero;
    string binario = "";
    cout << "Ingrese un número decimal: ";
    cin >> numero;
    if (numero == 0) {
        cout << "0" << endl;
        return 0;
    }
    while (numero > 0) {
        int residuo = numero % 2;
        binario = to_string(residuo) + binario;
        numero = numero / 2;
    }
    cout << binario << endl;
    return 0;
}
