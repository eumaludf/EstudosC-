#include <iostream>
#include <cstdlib>
#include <cstring>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    // Faça um programa em C++ que pergunte um valor em graus Fahrenheit e imprime na tela o correspondente em Celsius usando a seguinte fórmula:
    // Celsius = (fahrenheit – 32) * (5.0/9.0).

    float f, c;

    cout << "Bem vindo ao programa de conversor de unidades de temperatura!" << endl;
    cout << "Qual a temperatura atual em Fahrenheit?"<<endl;
    cin >> f;
    c = ((f - 32) * (5.0 /9.0 ));
    cout << "A temperatura atual em Celsius é: " << c << "°C."<<endl;

    return 0;
}
