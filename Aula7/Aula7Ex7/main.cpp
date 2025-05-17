#include <iostream>
#include <locale.h>


using namespace std;

int main()
{
   setlocale(LC_ALL, "Portuguese");
   int matriz[6][3][3];
   int i, j, k;

   //preencher a matriz
   for(i=0; i<6; i++){
    for(j=0; j<3; j++){
            for (k=0; k<3; k++){
        cout << "Digite o valor para preencher a matriz [" << i << ", " << j << ", " << k << "]:";
        cin >> matriz[i][j][k];
            }
    }
   }

   cout << endl;

   //mostrar os valores na tela
      for(i=0; i<2; i++){
    for(j=0; j<3; j++){
         for (k=0; k<3; k++){
        cout << matriz[i][j][k] << "\t";
         }
    }
    cout << endl;
   }
    return 0;
}
