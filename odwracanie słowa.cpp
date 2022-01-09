#include <iostream>
#include <string>

using namespace std;

int main()
{
    using namespace std;
    cout << "Podaj słowo:" << endl;
    string word;
    cin>> word;

    char temp;
    int i, j;

    for (j=0, i=word.size() -1; j<i; --i,++j)
    {
        temp=word[i];
        word[i]=word[j];
        word[j]=temp;
    }
    cout<<word<"\nGotowe\n";
    return 0;
}
