#include <bits/stdc++.h>
using namespace std;

int main()
{
    int even= 0 ;
    int a;
    for ( int i=1; i<=5; i++)
    {
        cin>> a;
        if( a%2==0)
        {
            even++;
        }
    }
    cout << even << " valores pares" << endl;
    return 0;
}
