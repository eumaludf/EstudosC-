#include <iostream>
#include <cstdlib>
#include <cstring>
#include <locale.h>

using namespace std;

int main()
{
    float m;
    setlocale(LC_ALL, "Portuguese");
    cout << "Digite a média de um aluno: " << endl;
        cin >> m;
    if (m >=0 && m <= 10){
        cout << "A média é válida." << endl;
        if(m >=6){
             cout << "Aluno aprovado com media: " << m << endl;
        }
        else {
              cout << "Aluno reprovado com media: " << m << endl;
        }
    }
    else {
        cout << "A média não é válida." << endl;
    }
    return 0;
}
