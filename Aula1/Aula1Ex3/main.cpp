#include <iostream>
#include <cstdlib>
#include <cstring>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float n1, n2, n3, soma, subtracao, divisao, mult;
    int n4, n5, r;

    cout << "Este programa irá executar operações matemáticas." << endl;
    cout << "Cinco números serão necessários." << endl;
    cout << "Digite o primeiro número:" << endl;
    cin >> n1;
    cout << "Digite o segundo número:" << endl;
    cin >> n2;
    cout << "Digite o terceiro número:" << endl;
    cin >> n3;
    cout << "Digite o quarto número:" << endl;
    cin >> n4;
    cout << "Digite o quinto número:" << endl;
    cin >> n5;

    soma = n1 + n2;
    cout << "A soma do primeiro e do segundo número é: " << soma << endl;
    subtracao = n3 - n1;
    cout << "A subtração do terceiro pelo primeiro número é: " << subtracao << endl;
    divisao = n2 / n1;
    cout << "A divisão do segundo pelo primeiro número é: " << divisao << endl;
    mult = n1 * n2;
    cout << "A multiplicação do primeiro pelo segundo número é: " << mult << endl;
    r = n4 % n5;
    cout << "O resto da divisão do quarto pelo quinto número é: " << r << endl;



    return 0;

}
