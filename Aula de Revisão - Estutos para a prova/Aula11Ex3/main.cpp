#include <iostream>
#include <locale.h>


using namespace std;

int main()
{
   setlocale(LC_ALL, "Portuguese");

    float vetor[10], i;

    for(i=0; i<10; i++){
        cout << "Digite o �" << i << " n�mero real do vetor 1:";
        cin >> vetor[i];

    }


    for (i=9; i>=0; i--){
            cout << "Os n�meros na ordem inversa s�o: " << endl;
        cout << vetor[i] << " - " ;
    }
    return 0;
}
