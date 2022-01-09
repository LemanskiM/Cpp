#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double a, b, c, delta, x1, x2;
    cout << "Podaj wspolczynnik a rownania kwadratowego: ";
    cin >> a;
    cout << "Podaj wspolczynnik b rownania kwadratowego: ";
    cin >> b;
    cout << "Podaj wspolczynnik c rownania kwadratowego: ";
    cin >> c;
    delta = b * b -( 4 * a * c );
    if( delta < 0 )
    {
        cout << "Rownanie nie ma rozwiazania";
        return 0;
    }
    if( delta == 0 )
    {
        cout << "Rownanie ma jendo rozwiazanie ";
        cout << "x_0 = " <<- b /( 2 * a );

        return 0;
    }
    delta = sqrt( delta );
    if( b > 0 )
    {
        x1 =( - b - delta ) /( 2 * a );
        x2 = c /( a * x1 );
    }
    else
    {
        x2 =( - b + delta ) /( 2 * a );
        x1 = c /( a * x2 );
    }
    cout << "Rowanie ma dwa rozwiazania: ";
    cout << "x_1 = " << x1 << "   x_2 = " << x2;
    return 0;
}
