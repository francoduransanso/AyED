#include <iostream>
#include <iomanip>

using namespace std;

int main() {
   
    double pi = 0.0;
    int i = 0;
	double resultadoa = 0.0;

    for (i = 0; i < 1000000; i++) {

        resultadoa = 1.0 / (2 * i + 1);

        if (i % 2 == 0) {
            pi += resultadoa;
        } else {
            pi -= resultadoa;
        }   
    }

	pi = pi * 4;

    cout << setprecision(7) << pi << endl;

    return 0;
}