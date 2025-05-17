#include <iostream>
#include <cstdlib>
#include <cstring>
#include <locale.h>
#include <cctype>

using namespace std;

int main()
{
    int contador = 50;

    setlocale(LC_ALL, "Portuguese");

    while (contador > 0){
         cout << "Número = "<< contador << endl;
         contador = contador - 1;
    }
     cout << "ACABOU!!"<< endl;
    return 0;
}
