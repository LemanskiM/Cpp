#include <iostream>

long double propability (unsigned numbers, unsigned picks);


int main()
{
    using namespace std;
    double total, choices;
    cout<<"Podaj liczbe maksymalna oraz \n" "liczbe skreslen :\n";
    while((cin>>total>>choices) && choices <=total)
    {
        cout<<"Szansa wygranej to 1 do ";
        cout<<propability(total, choices);
        cout<<"\n";
        cout<<"nastepne dwie liczby (q aby zakonczyc):";
    }



    cout << "dzieki" << endl;
    return 0;


}
long double propability (unsigned numbers, unsigned picks)
{
  long double result =1.0;
  long double n;
  unsigned p;

  for (n=numbers, p=picks; p>0; n--, p--)
        result = result * n/p;
  return result;
}
