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
        cout << "Digite dois n�meros:" << endl;
        cin >> n1 >> n2;
        soma = n1 + n2;
        cout << "O resultado da soma �: "<< soma << endl;
    break;
    case 2:
        cout << "Digite dois n�meros:" << endl;
        cin >> n1 >> n2;
        sub = n1 - n2;
        cout << "O resultado da subtra��o �: "<< sub << endl;
    break;
    case 3:
        cout << "Fim!" << endl;
    break;
    default:
        cout << "Op��o inv�lida." << endl;
    return 0;
    }
}
