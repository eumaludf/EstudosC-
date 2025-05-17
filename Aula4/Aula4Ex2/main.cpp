#include <iostream>
#include <cstdlib>
#include <cstring>
#include <locale.h>
#include <cctype>

using namespace std;

int main()
{
    char opc;
    setlocale(LC_ALL, "Portuguese");
    cout << "Digite C para bolo de chocolate!" << endl;
    cout << "Digite B para bolo de banana!" << endl;
    cout << "Digite A para bolo de amendoin!" << endl;
    cout << "Digite L para bolo de laranja!" << endl;
    cout << "Digite F para bolo de fubá!" << endl;
    cin >> opc;
    opc = toupper(opc);

    switch (opc){
    case 'C':
        cout << "Bolo de chocolate: 14 reais." << endl;
    break;
    case 'B':
        cout << "Bolo de banana: 17 reais" << endl;
    break;
    case 'A':
        cout << "Bolo de amendoin: 13 reais" << endl;
    break;
    case 'L':
        cout << "Bolo de laranja: 15 reais" << endl;
    break;
    case 'F':
        cout << "Bolo de fubá: 12 reais" << endl;
    break;
    default:
        cout << "Opção inválida." << endl;
    }
    return 0;
}
