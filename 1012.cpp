#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    cout << fixed << setprecision(3) << "TRIANGULO: " << 0.5 * (a * c) << endl << "CIRCULO: " <<  3.14159 * c * c << endl ;
    cout << fixed << setprecision(3) << "TRAPEZIO: " << 0.5* (a + b) * c << endl << "QUADRADO: " << b*b << endl;
    cout << fixed << setprecision(3) << "RETANGULO: " << a * b << endl;
    return 0;
}
