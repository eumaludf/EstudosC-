#include <iostream>
#include <cstdlib>
#include <cstring>
#include <locale.h>
#include <cctype>
#include <iomanip>

using namespace std;

int main()
{

     setlocale(LC_ALL, "Portuguese");
    char t[] = "Esse é um texto aleatório para testar funções de manipulação de STRING!";
    char *ptr;
    cout << "Vamos procurar pela letra P no texto" << t << endl;
    // qual a primeira vez que aparece: ptr=strchr(t,'p');
    // qual a última vez que aparece: ptr=strchr(t,'p');

    if (*ptr){
        cout << "A letra apareceu pela primeira vez na posição: " << ptr-t+1;
    }
    else{
        cout << "A letra não aparece no texto.";
    }
    return 0;
}
