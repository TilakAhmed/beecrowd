#include<iostream>
using namespace std;

int main()
{
    int d, m, y;
    cin >> d;
    y= d /365;
    m= d % 365 / 30;
    d= d % 365 % 30;
    cout << y << " ano(s)" << endl;
    cout << m << " mes(es)" << endl;
    cout << d << " dia(s)" << endl;
    return 0;
}
