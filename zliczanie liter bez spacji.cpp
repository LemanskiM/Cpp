#include <iostream>


int main()
{
    using namespace std;
    char ch;
    int count=0;
    cout<< "podawaj znaki ;# konczy wprowadzenie:\n";
    cin>>ch;
    while(ch != '#')

    {
        cout<<ch;
        ++count;
        cin>>ch;
    }
    cout << endl<< "wczytano  "<<count<< endl;
    return 0;
}
