#include <iostream>
#include <locale.h>


using namespace std;

int main()
{
   setlocale(LC_ALL, "Portuguese");

    int vetor[10], v[10], x[20], i;

    for(i=0; i<10; i++){
        cout << "Digite o °" << i << " do vetor 1:";
        cin >> vetor[i];

    }

    for(i=0; i<10; i++){
        cout << "Digite o °" << i << " do vetor 2:";
        cin >> v[i];
    }

    for (int i=0, j=0; i<20; i++, j+=2){
    x[j]= vetor[i];
    x[j+1]= v[i];
    }

    for (i=0; i<20; i++){
        cout << x[i] << " - " ;
    }
    return 0;
}
