#include <iostream>
#include <locale.h>


using namespace std;

int main()
{
   setlocale(LC_ALL, "Portuguese");

   int q, i, j;

   cout << "Digite o valor para o tamanho de uma matriz quadrada:";
   cin >> q;

   int m[q][q];

   for(i=0; i<q; i++){
    for(j=0; j<q; j++){
        cout << "Digite o valor para a posição " << i << ", " << j << " da matriz: ";
        cin >> m[i][j];
    }
   }

   cout << "Os valores da matriz são: " << endl;
      for(i=0; i<q; i++){
    for(j=0; j<q; j++){
        cout << m[i][j] << "\t";
    }
    cout << endl;
   }

    cout << "Os valores da matriz sem a primeira linha e sem a primeira coluna são: " << endl;
      for(i=0; i<q; i++){
    for(j=0; j<q; j++){
        if(i!=0 && j!=0)
        cout << m[i][j] << "\t";
    }
    cout << endl;
   }

    return 0;
}
