#include <iostream>
#include <cstdlib>
#include <cstring>
#include <locale.h>

using namespace std;

int main()
{
    int golSp, golP;
    setlocale(LC_ALL, "Portuguese");
    cout << "Placar S�o Paulo X Palmeiras!" << endl;
    cout << "Gols do S�o Paulo:" << endl;
    cin >> golSp;
    cout << "Gols do Palmeiras:" << endl;
    cin >> golP;
    if ( golSp > golP){
         cout << "S�o Paulo ganhou!" << endl;
    }
    else {
         cout << "N�o adianta enganar o computador!" << endl;
    }

    return 0;
}
