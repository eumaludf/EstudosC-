#include <iostream>
#include <cstdlib>
#include <cstring>
#include <locale.h>
#include <cctype>

using namespace std;

int main()
{
    int contador = 0;

    setlocale(LC_ALL, "Portuguese");

    while (contador <= 100){
         if(contador % 10 == 0){
         cout << "Número = "<< contador << endl;
         }
         contador = contador + 1;
    }
     cout << "ACABOU!!"<< endl;
    return 0;
}
