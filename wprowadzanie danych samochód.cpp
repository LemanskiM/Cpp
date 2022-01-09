#include <iostream>

using namespace std;

class Car
{
public:
//atrybuty ponizej
    string marka;
    string model;
    int rocznik;
    int przebieg;

//metody

    void wczytaj()
    {
    cout<<"Podaj marke   ";
    cin>>marka;
    cout<<"Podaj model   ";
    cin>>model;
    cout<<"Podaj rocznik    ";
    cin>>rocznik;
    cout<<"Podaj przebieg   ";
    cin>>przebieg;

    }
    void wypisz()

    {
      cout<<"marka to "<<marka<<endl<<"model to  "<<model<<endl<< "rocznik to  "<<rocznik<<endl<<"przebieg to  "<< przebieg;
    }


};
int main()
{
    Car c1;
    Car c2;
    Car c3;

    c2.wczytaj();
    c2.wypisz();

    return 0;
}
