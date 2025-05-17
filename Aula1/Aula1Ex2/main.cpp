#include <iostream>
#include <cstdlib>
#include <cstring>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float s = 1000;
    float c = 5;
    float v, sf;

    cout << "Digite o valor de vendas do mês: ";
    cin >> v;
    sf = s + ((v * c)/100);
    cout << "O salário final é: " << sf << " reais.";

    return 0;
}
