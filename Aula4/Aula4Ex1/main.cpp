#include <iostream>
#include <cstdlib>
#include <cstring>
#include <locale.h>

using namespace std;

int main()
{
    int opc;
    setlocale(LC_ALL, "Portuguese");
    cout << "Digite 1 para Prato do dia!" << endl;
    cout << "Digite 2 para Lasanha!" << endl;
    cout << "Digite 3 para Picanha Grelhada!" << endl;
    cout << "Digite 4 para Salada Simples!" << endl;
    cin >> opc;

    switch (opc){
    case 1:
        cout << "Prato do dia: 17 reais." << endl;
    break;
    case 2:
        cout << "Lasanha: 17 reais" << endl;
    break;
    case 3:
        cout << "Picanha: 21,90 reais" << endl;
    break;
    case 4:
        cout << "Salada Simples: 7,90 reais" << endl;
    break;
    default:
        cout << "Opção inválida." << endl;
    }
    return 0;
}
