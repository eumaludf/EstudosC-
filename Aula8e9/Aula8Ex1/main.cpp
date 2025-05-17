#include <iostream>

using namespace std;

int main()
{
    struct EstrtuturaAluno{
    char nome[60];
    char matricula[10];
    int anoIngresso;
    } strAluno[3];

    int i;

    for(i=0; i<3; i++){
        cout << "Informe o nome do aluno: " << endl;
        cin.getline(strAluno[i].nome, 60);
        cout << "Informe a matrícula do aluno: " << endl;
        cin.getline(strAluno[i].matricula, 10);
        cout << "Informe o ano de ingresso do aluno: " << endl;
        cin >> strAluno[i].anoIngresso;
        fflush(stdin);
    }

    cout<< endl;
    cout<< "Alunos matriculados: " << endl;

    for(i=0; i<3; i++){
        cout<< "Nome: " << (strAluno[i].nome) << ", ";
          cout<< "matrícula: " << (strAluno[i].matricula) << " e ";
            cout<< "ano de ingresso: " << (strAluno[i].anoIngresso) << endl;
    }
}
