#include <iostream>
#include <cstdlib>
#include <cstring>
#include <locale.h>

using namespace std;

int main()
{
    float n1, n2, n3;
    setlocale(LC_ALL, "Portuguese");
    cout << "Este é um programa que recebe três números e retorna o maior!" << endl;
    cout << "Digite o primeiro número:" << endl;
    cin >> n1;
    cout << "Digite o segundo número:" << endl;
    cin >> n2;
    cout << "Digite o terceiro número:" << endl;
    cin >> n3;
    if(n1>n2 && n1>n3){
        cout << "O número: " << n1 << " é maior que " << n2 << " e " << n3;
    }
    else if(n2>n1 && n2>n3){
        cout <<  "O número: " << n2 << " é maior que " << n1 << " e " << n3;
    }
    else {
        cout <<  "O número: " << n3 << " é maior que " << n1 << " e " << n2;
    }
    return 0;

}
