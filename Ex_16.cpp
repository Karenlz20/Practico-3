#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Ingrese el dividendo y el divisor" << endl;
    cin >> a >> b;
    int cociente = 0;
    int resto = a;
    while (resto >= b) {
        resto = resto - b;
        cociente++;
    }
    cout << cociente << " " << resto << endl;
    return 0;
}
