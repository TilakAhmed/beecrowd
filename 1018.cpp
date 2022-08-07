#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    int b;
    cin >> a;
    cout<< a<< endl;
    cout<< a/100 << " nota(s) de R$ 100" << endl;
    b= a%100;
    cout<< b/50 << " nota(s) de R$ 50" << endl;
    b=b%50;
    cout<< b/20 << " nota(s) de R$ 20" << endl;
    b=b%20;
    cout<< b/10 << " nota(s) de R$ 10" << endl;
    b=b%10;
    cout<< b/5 << " nota(s) de R$ 5" << endl;
    b=b%5;
    cout<< b/2 << " nota(s) de R$ 2" << endl;
    b=b%2;
    cout<< b/1 << " nota(s) de R$ 1" << endl;
}
