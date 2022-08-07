#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b,c,d, e;
    cin>> a >> b >> c >> d ;
    double average = (a*2 + b*3 + c*4 + d*1) / 10 ;
    cout<< fixed << setprecision(1) << "Media: " << average << endl;

    if (average >= 7.0)
    {
        cout << "Aluno aprovado." << endl;
    }
    else if (average < 5.0)
    {
        cout << "Aluno reprovado." << endl;
    }
    else if (average>=5.0 && average<= 6.9)
    {
        cout << "Aluno em exame." << endl;
        cin>> e;
        cout<< "Nota do exame: " << e << endl;
        if ( (e + average) / 2 >=5.0 )
        {
            cout<< "Aluno aprovado." << endl;
        }
        else
        {
            cout<< "Aluno reprovado." << endl;
        }
        cout<< fixed << setprecision(1) << "Media final: " << (e + average) / 2 << endl;
    }
    else
    {
        cout<<"Aluno reprovado." << endl;
    }
}
