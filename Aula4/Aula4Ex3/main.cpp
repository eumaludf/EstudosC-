#include <iostream>
#include <cstdlib>
#include <cstring>
#include <locale.h>
#include <cctype>

using namespace std;

int main()
{
    int opc;
    float n1, n2, soma, sub;
    setlocale(LC_ALL, "Portuguese");
    cout << "Digite 1 para somar!" << endl;
    cout << "Digite 2 para subtrair!" << endl;
    cout << "Digite 3 para sair!" << endl;
    cin >> opc;


    switch (opc){
    case 1:
        cout << "Digite dois números:" << endl;
        cin >> n1 >> n2;
        soma = n1 + n2;
        cout << "O resultado da soma é: "<< soma << endl;
    break;
    case 2:
        cout << "Digite dois números:" << endl;
        cin >> n1 >> n2;
        sub = n1 - n2;
        cout << "O resultado da subtração é: "<< sub << endl;
    break;
    case 3:
        cout << "Fim!" << endl;
    break;
    default:
        cout << "Opção inválida." << endl;
    return 0;
    }
}
