#include <iostream>
#include <locale.h>


using namespace std;

int main()
{
   setlocale(LC_ALL, "Portuguese");

    float vetor[10];
    int i;
    fflush(stdin);

    cout << "Os valores do vetor são: " << endl;
   for(i=0; i<10; i++){
    cin >> vetor[i];

   }

   cout<< endl;
   cout<< "Os valores do vetor na ordem inversa são: " << endl;
    for(i=9; i>=0; i--){
    cout << vetor[i] << " - ";
   }

    return 0;
}
