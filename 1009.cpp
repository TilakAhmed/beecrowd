#include <bits/stdc++.h>>
using namespace std;

int main()
{
    string name;
    double a;
    double b;
    cin >> name;
    cin>> a >> b;
    cout<< fixed << setprecision(2) << "TOTAL = R$ "<< a +(b*0.15)<< endl;
    return 0;
}

