#include <iostream>
#include <cstdlib>
#include <cstring>
#include <locale.h>

using namespace std;

int main()
{
    int golSp, golP;
    setlocale(LC_ALL, "Portuguese");
    cout << "Placar São Paulo X Palmeiras!" << endl;
    cout << "Gols do São Paulo:" << endl;
    cin >> golSp;
    cout << "Gols do Palmeiras:" << endl;
    cin >> golP;
    if ( golSp > golP){
         cout << "São Paulo ganhou!" << endl;
    }
    else {
         cout << "Não adianta enganar o computador!" << endl;
    }

    return 0;
}
