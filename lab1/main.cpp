#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a; // значения на действительной оси => int
    int b;

    cin >> a >> b;

    int ans = (a + b) / 2; 
    
    int intV = 32;
    int minInt = pow(2, 31) * (-1);
    int maxInt = pow(2, 31) -1;
    
    setlocale(LC_ALL, "ru_RU.UTF-8");


    cout << "Середина интервала: " << ans << "\n\n";
    
    cout << "int занимает " << intV << " бит.\n";
    cout << "min = " << minInt << "\nmax = " << maxInt << "\n";
  
    
    return 0;

}
