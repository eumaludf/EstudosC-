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
    char t[] = "Esse � um texto aleat�rio para testar fun��es de manipula��o de STRING!";
    char *ptr;
    cout << "Vamos procurar pela letra P no texto" << t << endl;
    // qual a primeira vez que aparece: ptr=strchr(t,'p');
    // qual a �ltima vez que aparece: ptr=strchr(t,'p');

    if (*ptr){
        cout << "A letra apareceu pela primeira vez na posi��o: " << ptr-t+1;
    }
    else{
        cout << "A letra n�o aparece no texto.";
    }
    return 0;
}
