#include <iostream>
#include <cstdlib>
#include <cstring>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
int n1, n2, n3;
int rp, rf, m;

    cout << "Esse programa faz a soma de três números. \n";
    cout << "Digite o primeiro número a ser somado: \n";
    cin >> n1;
    cout << "Digite o segundo número a ser somado: \n";
    cin >> n2;
    rp = n1 + n2;
    cout << "Digite o terceiro número a ser somado: \n";
    cin >> n3;
    rf = rp + n3;
    cout << "O valor da soma é: " << rf << "\n";

    return 0;
}
