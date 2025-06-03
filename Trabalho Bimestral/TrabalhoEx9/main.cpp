#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int p, i;

    cout << "Quantos pets deseja cadastrar? ";
    cin >> p;
    cin.ignore();  // limpa o buffer depois de cin

    // Struct declarada dentro do main, antes de usá-la
    struct Pet {
        char nome[60];
        char especie[30];
        char raca[30];
        char sexo[30];
        int idade;
        char nomeDono[60];
        char rgDono[20];
        char telefoneDono[20];
    };

    Pet strPet[p]; // vetor declarado após a struct

    fflush(stdin);

    // Leitura dos dados
    for(i = 0; i < p; i++) {
        cout << "\nPet " << i+1 << endl;
        cout << "Informe o nome do animal: ";
        cin.getline(strPet[i].nome, 60);
    fflush(stdin);
        cout << "Informe a espécie do animal: ";
        cin.getline(strPet[i].especie, 30);
    fflush(stdin);
        cout << "Informe a raça do animal: ";
        cin.getline(strPet[i].raca, 30);
    fflush(stdin);
        cout << "Informe o sexo do animal: ";
        cin.getline(strPet[i].sexo, 30);
    fflush(stdin);
        cout << "Informe a idade do animal: ";
        cin >> strPet[i].idade;
        cin.ignore();  // limpa a quebra de linha pendente
    fflush(stdin);
        cout << "Informe o nome do dono: ";
        cin.getline(strPet[i].nomeDono, 60);
    fflush(stdin);
        cout << "Informe o RG do dono: ";
        cin.getline(strPet[i].rgDono, 20);
    fflush(stdin);
        cout << "Informe o telefone do dono: ";
        cin.getline(strPet[i].telefoneDono, 20);
    fflush(stdin);
    }

            cout << "\n\n--- Dados dos Pets Cadastrados ---\n";
    for(i = 0; i < p; i++) {
        cout << "\nPet " << i+1 << "-------------------------------" << endl;
        cout << "Nome: " << strPet[i].nome << endl;
        cout << "Espécie: " << strPet[i].especie << endl;
        cout << "Raça: " << strPet[i].raca << endl;
        cout << "Sexo: " << strPet[i].sexo << endl;
        cout << "Idade: " << strPet[i].idade << endl;
        cout << "Nome do Dono: " << strPet[i].nomeDono << endl;
        cout << "RG do Dono: " << strPet[i].rgDono << endl;
        cout << "Telefone do Dono: " << strPet[i].telefoneDono << endl;

    }



    return 0;
}
