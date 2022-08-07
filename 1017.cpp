#include <bits/stdc++.h>>
using namespace std;

int main()
{
    int spent_time;
    int average_speed;
    int  spent_fuel = 12;
    cin>> spent_time >> average_speed;
    cout<< fixed << setprecision(3) << double(spent_time * average_speed) / spent_fuel <<endl;
return 0;
}
