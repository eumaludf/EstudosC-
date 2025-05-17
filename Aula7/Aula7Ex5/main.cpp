#include <iostream>
#include <locale.h>


using namespace std;

int main()
{
   setlocale(LC_ALL, "Portuguese");



   float c;
   int t;

   cout << "Quantos produtos você vai lançar?";
   cin >> t;

   int vetor[t], i;

   for(i=0; i<t; i++){
    cout << "Digite o valor do produto " << i+1 << ": " << endl;
    cin >> vetor[i];
   }

    for(i=0; i<t; i++){
    c = c + vetor[i];
   }


   cout << "O valor da conta fica em: " << c << endl;

    return 0;
}
