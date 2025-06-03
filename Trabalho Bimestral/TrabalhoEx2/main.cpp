#include <iostream>
#include <locale.h>


using namespace std;

int main()
{
   setlocale(LC_ALL, "Portuguese");

   int vetor[10], i, d = 0;

   for(i=0; i<10; i++){
    cout << "Digite o º" << i+1 << " valor:";
    cin >> vetor[i];
   }

   cout<< endl;
   cout<< "Os valores digitados são: " << endl;
    for(i=0; i<10; i++){
    cout << vetor[i] << " - ";
    if ( vetor[i] % 3 == 0){
        d = d + 1;
    }
   }

   cout << endl << "Foram digitados " << d << " números divisores de 3";

    return 0;
}
