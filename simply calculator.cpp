#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>

using namespace std;

float x,y;
char wybor;

int main()
{
    for(;;)
    {


    cout << "podaj 1 liczbe:";
    cin>>x;
    cout<< "podaj 2 liczbe:";
    cin>> y;

    cout<<endl;
    cout<<"menu"<<endl;
    cout<<"dodawanie"<<endl;
    cout<<"odejmowanie"<<endl;
    cout<<"mnozenie"<<endl;
    cout<<"dzielnie"<<endl;
    cout<<"wyjscie"<<endl;

    cout<<"wybor : ";
    wybor=getch();

    switch(wybor)
    {
    case '1':
    cout<<"suma = "<<x+y;
    break;
    case '2':
    cout<<"roznica = "<<x-y;
    break;
    case '3':
    cout<<"iloczyn = "<<x*y;
    break;
    case '4':
        if(y==0) cout<< "nie dzielimy przez 0";
else cout<<"iloraz = "<<x/y;

    case '5':
        exit(0);
    break;
    default: cout<<"nie ma takiej opcji";

    getchar(); getchar();
    system("cls");
        }



    }

    return 0;
}
