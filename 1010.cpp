#include <bits/stdc++.h>
using namespace std;

int main()
{
    int c1, n1, c2, n2;
    double p1, p2;
    cin >> c1 >> n1 >> p1 >> c2 >> n2 >> p2;
    cout<< fixed<< setprecision(2) << "VALOR A PAGAR: R$ " << (n1 * p1) + (n2 * p2) << endl;
    return 0;
}
