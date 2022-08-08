#include <bits/stdc++.h>
using namespace std;

int main()
{

    double a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a,a+3);
    if(a[2]>= a[1]+a[0])
    {
        cout<< "NAO FORMA TRIANGULO" << endl;
    }
    else if( a[2]*a[2]==a[1]*a[1] + a[0]*a[0])
    {
        cout<< "TRIANGULO RETANGULO" << endl;
    }
    else if(a[2]*a[2]>a[1]*a[1] + a[0]*a[0])
    {
        cout<< "TRIANGULO OBTUSANGULO" << endl;
    }
    else if(a[2]*a[2]<a[1]*a[1] + a[0]*a[0])
    {
        cout<< "TRIANGULO ACUTANGULO" << endl;
    }
    if (a[2] == a[1] && a[1]== a[0])
    {
        cout<< "TRIANGULO EQUILATERO" << endl;
    }
    else if (a[2]==a[1] || a[2]==a[0]|| a[1]==a[0])
    {
        cout<< "TRIANGULO ISOSCELES" << endl;
    }
    return 0;
}
