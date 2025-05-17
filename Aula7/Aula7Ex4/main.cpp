#include <iostream>
#include <locale.h>


using namespace std;

int main()
{
   setlocale(LC_ALL, "Portuguese");

   int vetor[5], i;
   float s, m;

   for(i=0; i<5; i++){
    cout << "Digite a nota " << i+1 << ": " << endl;
    cin >> vetor[i];
   }

    for(i=0; i<5; i++){
    s = s + vetor[i];
   }

   m = s/5;

   cout << "A média das 5 notas é: " << m << endl;

    return 0;
}
