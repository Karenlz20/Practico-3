#include <iostream>
#include <string>
using namespace std;

int main() {
    string numero;
    cout << "Ingrese un número: ";
    cin >> numero;
    bool esPalindromo = true;
    int size = numero.size();
    for (int i = 0; i < size / 2; i++) {
        if (numero[i] != numero[size - 1 - i]) {
            esPalindromo = false;
            break;
        }
    }
    if (esPalindromo) {
        cout << numero << " Es palindrome" << endl;
    } else {
        cout << numero << " No es palindrome" << endl;
    }
    return 0;
}
