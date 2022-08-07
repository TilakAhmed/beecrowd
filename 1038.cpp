#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    int y;
    double a = 4.00, b= 4.50, c= 5.00, d= 2.00, e= 1.50;
    double temp=0;
    cin>> x >> y;
    if (x == 1)
    {
        temp= y*a;
    }
    else if (x == 2)
    {
        temp=y*b;
    }
    else if (x == 3)
    {
        temp=y*c;
    }
    else if (x == 4)
    {
        temp=y*d;
    }
    else if (x == 5)
    {
        temp=y*e;
    }
    cout<< fixed << setprecision(2) << "Total: R$ " << temp<< endl;
return 0;
}
