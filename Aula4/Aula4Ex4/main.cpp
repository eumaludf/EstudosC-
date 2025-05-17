#include <iostream>
#include <cstdlib>
#include <cstring>
#include <locale.h>
#include <cctype>

using namespace std;

int main()
{
    int contador = 0;
    float n1, n2, soma, sub;
    setlocale(LC_ALL, "Portuguese");

    while (contador < 0){
         cout << "contador = "<< contador << endl;
         contador = contador + 1;
    }
     cout << "ACABOU!!"<< endl;
    return 0;
}
