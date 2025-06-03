#include <iostream>
#include <iomanip>
using namespace std;

// Função para calcular IMC
float calcularIMC(float peso, float altura) {
    return peso / (altura * altura);
}

int main() {
    fflush(stdin);

    char nome[60];
    float peso, altura, imc;


    cout << "Informe o nome: ";
    cin.getline(nome, 60);


    cout << "Informe o peso (kg): ";
    cin >> peso;


    cout << "Informe a altura (m): ";
    cin >> altura;


    // Calculando IMC
    imc = calcularIMC(peso, altura);

    // Mostrando resultado
    cout << fixed << setprecision(2);
    cout << "\nNome: " << nome << endl;
    cout << "Peso: " << peso << " kg" << endl;
    cout << "Altura: " << altura << " m" << endl;
    cout << "IMC: " << imc << endl;

    return 0;
}
