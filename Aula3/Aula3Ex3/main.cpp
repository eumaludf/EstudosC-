#include <iostream>
#include <cstdlib>
#include <cstring>
#include <locale.h>

using namespace std;

int main()
{
    float n1, n2, n3;
    setlocale(LC_ALL, "Portuguese");
    cout << "Este � um programa que recebe tr�s n�meros e retorna o maior!" << endl;
    cout << "Digite o primeiro n�mero:" << endl;
    cin >> n1;
    cout << "Digite o segundo n�mero:" << endl;
    cin >> n2;
    cout << "Digite o terceiro n�mero:" << endl;
    cin >> n3;
    if(n1>n2 && n1>n3){
        cout << "O n�mero: " << n1 << " � maior que " << n2 << " e " << n3;
    }
    else if(n2>n1 && n2>n3){
        cout <<  "O n�mero: " << n2 << " � maior que " << n1 << " e " << n3;
    }
    else {
        cout <<  "O n�mero: " << n3 << " � maior que " << n1 << " e " << n2;
    }
    return 0;

}
