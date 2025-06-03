#include <iostream>
#include <locale.h>


using namespace std;

int main()
{
   setlocale(LC_ALL, "Portuguese");

   int vetor[10], i, soma=0;

   for(i=0; i<10; i++){
    cout << "Digite o º" << i+1 << " valor:";
    cin >> vetor[i];
   }

   cout<< endl;
   cout<< "Os valores digitados são: " << endl;
    for(i=0; i<10; i++){
    cout << vetor[i] << " - ";
    soma = soma + vetor[i];
   }

   cout << endl << "A soma dos valores digitados é:" << soma;

    return 0;
}
