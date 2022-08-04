#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    int hour;
    double salary;
    cin>> num >> hour >> salary;
    cout<< "NUMBER = " << num << endl;
    cout<< fixed << setprecision(2) << "SALARY = U$ " << hour * salary <<endl;
    return 0;
}
