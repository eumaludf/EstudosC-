#include <iostream>
#include <cstdlib>
#include <cstring>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float n1, n2, n3, soma, subtracao, divisao, mult;
    int n4, n5, r;

    cout << "Este programa ir� executar opera��es matem�ticas." << endl;
    cout << "Cinco n�meros ser�o necess�rios." << endl;
    cout << "Digite o primeiro n�mero:" << endl;
    cin >> n1;
    cout << "Digite o segundo n�mero:" << endl;
    cin >> n2;
    cout << "Digite o terceiro n�mero:" << endl;
    cin >> n3;
    cout << "Digite o quarto n�mero:" << endl;
    cin >> n4;
    cout << "Digite o quinto n�mero:" << endl;
    cin >> n5;

    soma = n1 + n2;
    cout << "A soma do primeiro e do segundo n�mero �: " << soma << endl;
    subtracao = n3 - n1;
    cout << "A subtra��o do terceiro pelo primeiro n�mero �: " << subtracao << endl;
    divisao = n2 / n1;
    cout << "A divis�o do segundo pelo primeiro n�mero �: " << divisao << endl;
    mult = n1 * n2;
    cout << "A multiplica��o do primeiro pelo segundo n�mero �: " << mult << endl;
    r = n4 % n5;
    cout << "O resto da divis�o do quarto pelo quinto n�mero �: " << r << endl;



    return 0;

}
