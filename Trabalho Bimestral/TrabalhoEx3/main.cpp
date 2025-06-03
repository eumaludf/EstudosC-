#include <iostream>
#include <locale.h>


using namespace std;

int main()
{
   setlocale(LC_ALL, "Portuguese");

   int vetor[10], v[10], i, c = 0;


   for(i=0; i<10; i++){
    cout << "Digite o º" << i+1 << " valor do VETOR 1:";
    cin >> vetor[i];
   }

    for(i=0; i<10; i++){
    cout << "Digite o º" << i+1 << " valor do VETOR 1:";
    cin >> v[i];
   }

   cout<< endl;
   cout<< "Os valores digitados são: " << endl;
    for(i=0; i<10; i++){
    cout << vetor[i] << " - ";}

    cout << endl;

     for(i=0; i<10; i++){
    cout << v[i] << " - ";}

    cout << endl;

     for(i=0; i<10; i++){
    c = vetor[i] * v[i];
    cout << c << " - ";
   }

    return 0;
}
