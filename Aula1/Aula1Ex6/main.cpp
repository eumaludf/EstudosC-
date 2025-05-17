#include <iostream>
#include <cstdlib>
#include <cstring>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

//Faça um programa em C++ que leia o nome e três notas do aluno. Calcule a média. Após o cálculo,
//imprima uma mensagem da forma “Aluno Fulano possui média 7.0”.

    string nome;
    float n1, n2, n3, media;

    cout << "Bem vindo ao programa que realiza sua média aritimética!" << endl;
    cout << "Qual seu nome?" << endl;
    cin  >> nome;
    cout << "Por favor, digite três notas." << endl;
    cin >> n1 >> n2 >> n3;
    media = (n1 + n2 + n3)/3;
    cout << nome << ", a sua média é: " << media;


    return 0;
}
