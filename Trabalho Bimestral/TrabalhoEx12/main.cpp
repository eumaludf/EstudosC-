#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main() {
    fflush(stdin);

    int i, q;

    cout << "Quantas pessoas você irá cadastrar? ";
    cin >> q;
    fflush(stdin);

    struct Pessoa {
        char nome[60];
        float peso;
        float altura;
        float imc;
    } p[q];

    for(i=0; i<q; i++){
        cout << "\nPessoa " << i+1 << endl;

        fflush(stdin);
        cout << "Informe o nome: ";
        cin.getline(p[i].nome, 60);
        fflush(stdin);

        cout << "Informe o peso (kg): ";
        cin >> p[i].peso;
        fflush(stdin);

        cout << "Informe a altura (m): ";
        cin >> p[i].altura;
        fflush(stdin);

        // Calcula o IMC direto aqui
        p[i].imc = p[i].peso / (p[i].altura * p[i].altura);
    }

    cout << "\n--- Resultados ---\n";
    for(i=0; i<q; i++){
        cout << fixed << setprecision(2);
        cout << "\nNome: " << p[i].nome << endl;
        cout << "Peso: " << p[i].peso << " kg" << endl;
        cout << "Altura: " << p[i].altura << " m" << endl;
        cout << "IMC: " << p[i].imc << endl;
    }


    return 0;
}
