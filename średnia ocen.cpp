#include <iostream>

using namespace std;

float oceny[5]; float suma=0,srednia,k;

int main()
{
    for(int i=0; i<5; i++)
   {

    cout << "Podaj ocene" << endl;
    cin>>oceny[i];
    suma+=oceny[i];
    srednia=suma/5;
    if ((srednia-oceny[i])>=0) k=oceny[i];
    }
    cout<< k;
    return 0;
}
