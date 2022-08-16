#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    while (a!= 2002)
    {
        cin >> a;
        if ( a == 2002)
        {
            cout<< "Acesso Permitido" << endl;
            return 0;
        }
        else
        {
            cout<<  "Senha Invalida" << endl;
        }
    }
    return 0;
}
