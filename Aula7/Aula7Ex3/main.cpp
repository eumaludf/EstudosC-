#include <iostream>
#include <locale.h>


using namespace std;

int main()
{
   setlocale(LC_ALL, "Portuguese");

   char vetor[5], i;

   for(i=0; i<5; i++){
    cout << "Digite uma letra para armazenar na posi��o: " << i+1 << " do vetor." << endl;
    cin >> vetor[i];
   }

   cout<< endl;
   cout<< "O resultado do vetor �: " << endl;
    for(i=0; i<5; i++){
    cout << "O vetor na posi��o " << i+1 << " � " << vetor[i] << endl;
   }

   cout << "O vetor armazena as letras: " << vetor << endl;
   cout << "A segunda posi��o do vetor armazena a letra: " << vetor[1] << endl;

    return 0;
}
