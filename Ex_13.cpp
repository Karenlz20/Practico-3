#include <iostream>
using namespace std;

int main() {
    int N, k;
    cout << "Ingrese N: ";
    cin >> N;
    cout << "Ingrese k: ";
    cin >> k;
    int suma = 0;
    for (int i = 1; i <= N; i++) {
        int pot = 1;
        for (int j = 0; j < k; j++) {
            pot = pot * i;
        }
        suma = suma + pot;
    }
    cout << "Resultado = " << suma << endl;
    return 0;
}
