#include <iostream>
#include <cstdlib>
#include <cstring>
#include <locale.h>

using namespace std;

int main()
{
    //Faça um programa em C++ que peça o nome de uma pessoa, a quantidade de quilômetros que ela andou de bicicleta e o tempo gasto
    //em minutos para percorrer essa distância. Mostre na tela uma mensagem como: “Olá Mário, você percorreu 30 km em 65 minutos,
    // sua velocidade média foi: 27.7.
    setlocale(LC_ALL, "Portuguese");

    float media, t, d;
    string nome;

    cout << "Vamos calcular a sua velocidade média em um exercício diário de bicicleta." << endl;
    cout << "Qual seu nome?" << endl;
    cin >> nome;
    cout << "Quantos quilômetros você percorreu?" << endl;
    cin >> d;
    cout << "Quanto tempo você gastou em minutos?" << endl;
    cin >> t;
    media = d / t;
        cout << "Olá "<< nome << ", você percorreu " << d << " quilômetros em " << t << " minutos, a sua velocidade média em um exercício diário de bicicleta é: " << media << endl;

    return 0;
}
