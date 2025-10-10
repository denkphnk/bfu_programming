#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a; // значения на действительной оси => int
    int b;
    setlocale(LC_ALL, "Russian");

    cin >> a >> b;

    float ans = (float(a) + b) / 2;

    int intV = sizeof(int) * 8;
    int minInt = pow(2, intV - 1) * (-1);
    int maxInt = pow(2, intV - 1) - 1;

    cout << "Середина интервала: " << ans << "\n\n";

    cout << "int занимает " << intV << " бит.\n";
    cout << "min = " << minInt << "\nmax = " << maxInt << "\n\n";

    int floatV = sizeof(double) * 8;
    double minDouble = - numeric_limits<double>::max();
    double maxDouble = numeric_limits<double>::max();

    cout << "double занимает " << floatV << " бит.\n";
    cout << "min = " << minDouble << "\nmax = " << maxDouble << "\n";

    return 0;

}
