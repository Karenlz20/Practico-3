#include <iostream>
using namespace std;
int main() {
    double U = 1;
    double V = 1;
    cout << "U0 = " << U << " V0 = " << V << endl;
    for (int n = 1; n <= 10; n++) {
        U = U / n;
        V = 1;
        cout << "U" << n << " = " << U << " V" << n << " = " << V << endl;
    }
    return 0;
}
