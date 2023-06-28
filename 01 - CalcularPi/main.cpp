#include <iostream>
#include <iomanip>

using namespace std;

double calcularpi() {
    double pi = 0.0;
    double resultado = 0.0;
    int denominador = 1;
    int i = 0;

    while (true) {
        resultado = 1.0 / denominador;
        if (i % 2 == 0) {
            pi += resultado;
        } else {
            pi -= resultado;
        }

        denominador += 2;
        i++;

        string pistring = to_string(pi * 4);
        if (pistring.substr(0, 9) == "3.141592") {
            break;
        }
    }

    return pi * 4;
}

int main() {
    double pi = calcularpi();
    cout << setprecision(7) << pi << endl;

    return 0;
}