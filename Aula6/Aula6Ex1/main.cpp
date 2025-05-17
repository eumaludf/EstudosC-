#include <iostream>
#include <cstdlib>
#include <cstring>
#include <locale.h>
#include <cctype>
#include <iomanip>

using namespace std;

int main()
{
    string n;
    char opc;
    float m, n1, n2, n3;

     setlocale(LC_ALL, "Portuguese");

    cout << "Vamos calcular a média de um aluno." << endl;
    do{

    cout << "Qual o nome completo?" << endl;
    getline(cin, n);
    cout << "Digite as três notas do aluno:" << endl;
    cin >> n1 >> n2 >> n3;

    m = (n1 + n2 + n3)/3;

    cout << "A média do(a) aluno(a) "<< n << " é: " << m << endl;
    cout << "Deseja continuar? (S - Sim e N - Não)" << endl;
    cin >> opc;
    } while (opc != 'n' && opc != 'N');
    return 0;
}
