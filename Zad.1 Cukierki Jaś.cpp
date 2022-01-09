#include <iostream>

using namespace std;

int cukierki,uczniowie,x,y;

int main()
{
    cout<<"Podaj liczbe uczniow w Twojej klasie:";
    cin>>uczniowie;

    cout<<"Podaj liczbe cukierkow:";
    cin>>cukierki;

    x = cukierki/(uczniowie-1);


    cout << "Dla kazdego ucznia przypada cukierkow:"<<x<<endl;

    y=cukierki-x*(uczniowie-1);

    cout<<"Dla Jasia zostanie cukierkow:"<<y<<endl;
    return 0;
}
