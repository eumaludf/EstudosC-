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

    cout << "Esse programa faz a soma de tr�s n�meros. \n";
    cout << "Digite o primeiro n�mero a ser somado: \n";
    cin >> n1;
    cout << "Digite o segundo n�mero a ser somado: \n";
    cin >> n2;
    rp = n1 + n2;
    cout << "Digite o terceiro n�mero a ser somado: \n";
    cin >> n3;
    rf = rp + n3;
    cout << "O valor da soma �: " << rf << "\n";

    return 0;
}
