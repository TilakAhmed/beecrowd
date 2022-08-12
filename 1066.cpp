#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    int even = 0, odd = 0, positive = 0, negetive = 0;
    for( int i=1; i<=5; i++)
    {
        cin>> a;
        if(a%2==0)
        {
            even ++;
        }
        else if (a%2!=0)
        {
            odd ++;
        }
        if (a>0)
        {
            positive ++;
        }
        else if (a<0)
        {
            negetive ++;
        }
    }
    cout << even << " valor(es) par(es)" << endl;
    cout << odd << " valor(es) impar(es)" << endl;
    cout << positive << " valor(es) positivo(s)" << endl;
    cout << negetive << " valor(es) negativo(s)" << endl;
    return 0;
}
