#include <iostream>
#include <locale.h>


using namespace std;

int main()
{
   setlocale(LC_ALL, "Portuguese");

   int vetor[5], i;

   for(i=0; i<5; i++){
    cout << "Digite um n�mero para armazenar na posi��o: " << i+1 << " do vetor." << endl;
    cin >> vetor[i];
   }

   cout<< endl;
   cout<< "O resultado do vetor �: " << endl;
    for(i=0; i<5; i++){
    cout << "O vetor na posi��o " << i+1 << " � " << vetor[i] << endl;
   }

    return 0;
}
