#include <iostream>
#include <cstdlib>
#include <cstring>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

//Fa�a um programa em C++ que leia o nome e tr�s notas do aluno. Calcule a m�dia. Ap�s o c�lculo,
//imprima uma mensagem da forma �Aluno Fulano possui m�dia 7.0�.

    string nome;
    float n1, n2, n3, media;

    cout << "Bem vindo ao programa que realiza sua m�dia aritim�tica!" << endl;
    cout << "Qual seu nome?" << endl;
    cin  >> nome;
    cout << "Por favor, digite tr�s notas." << endl;
    cin >> n1 >> n2 >> n3;
    media = (n1 + n2 + n3)/3;
    cout << nome << ", a sua m�dia �: " << media;


    return 0;
}
