#include <iostream>
#include <cstdlib>
#include <cstring>
#include <locale.h>

using namespace std;

int main()
{
    //Fa�a um programa em C++ que pe�a o nome de uma pessoa, a quantidade de quil�metros que ela andou de bicicleta e o tempo gasto
    //em minutos para percorrer essa dist�ncia. Mostre na tela uma mensagem como: �Ol� M�rio, voc� percorreu 30 km em 65 minutos,
    // sua velocidade m�dia foi: 27.7.
    setlocale(LC_ALL, "Portuguese");

    float media, t, d;
    string nome;

    cout << "Vamos calcular a sua velocidade m�dia em um exerc�cio di�rio de bicicleta." << endl;
    cout << "Qual seu nome?" << endl;
    cin >> nome;
    cout << "Quantos quil�metros voc� percorreu?" << endl;
    cin >> d;
    cout << "Quanto tempo voc� gastou em minutos?" << endl;
    cin >> t;
    media = d / t;
        cout << "Ol� "<< nome << ", voc� percorreu " << d << " quil�metros em " << t << " minutos, a sua velocidade m�dia em um exerc�cio di�rio de bicicleta �: " << media << endl;

    return 0;
}
