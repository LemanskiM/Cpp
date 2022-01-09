#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
    string p;
    int x,y;
    cout<<"Podaj imie";
    cin>>p;
    x=p.length();
    cout<<"Liczba liter twojego imienia to "<<x<<endl;
    cout<<"Podaj nazwisko ";
    cin>>p;
    y=p.length();
    cout<<"Liczba liter twojego imienia i nazwiska to "<<y<<endl;
    getch ();
    return 0;

}

