#include <iostream>


int main()
{
    using namespace std;
    char ch;
    int count=0;
    cout<< "podawaj znaki ;# konczy wprowadzenie:\n";
    cin.get(ch);   //zamiast cin u¿ycie cin.get wtedy dodaje biale znaki

    while(ch != '#')

    {
        cout<<ch;
        ++count;
        cin.get(ch);
    }
    cout << endl<< "wczytano  "<<count<< endl;
    return 0;
}
