#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a;
    cin>> a;
    if (a>=0 && a<=400.00)
    {
        cout<< fixed << setprecision(2) << "Novo salario: " << a + (a*0.15) << endl;
        cout<< fixed << setprecision(2) << "Reajuste ganho: " << (a*0.15) << endl;
        cout<< "Em percentual: 15 %" << endl;
    }

    else if(a>=400.01 && a<=800.00)
    {
        cout<< fixed << setprecision(2) << "Novo salario: " << a + (a*0.12) << endl;
        cout<< fixed << setprecision(2) << "Reajuste ganho: " << (a*0.12) << endl;
        cout<< "Em percentual: 12 %" << endl;
    }
    else if (a>=800.01 && a<=1200.00)
    {
        cout<< fixed << setprecision(2) << "Novo salario: " << a + (a*0.10) << endl;
        cout<< fixed << setprecision(2) << "Reajuste ganho: " << (a*0.10) << endl;
        cout<< "Em percentual: 10 %" << endl;
    }
    else if (a>=1200.01 && a<=2000.00)
    {
        cout<< fixed << setprecision(2) << "Novo salario: " << a + (a*0.07) << endl;
        cout<< fixed << setprecision(2) << "Reajuste ganho: " << (a*0.07) << endl;
        cout<< "Em percentual: 7 %" << endl;
    }
    else if (a>2000.00)
    {
        cout<< fixed << setprecision(2) << "Novo salario: " << a + (a*0.04) << endl;
        cout<<fixed << setprecision(2) << "Reajuste ganho: " << (a*0.04) << endl;
        cout<< "Em percentual: 4 %" << endl;
    }
    return 0;
}
