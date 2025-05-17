#include <iostream>
#include <locale.h>


using namespace std;

int main()
{
   setlocale(LC_ALL, "Portuguese");
   int matriz[2][3];
   int i, j;

   //preencher a matriz
   for(i=0; i<2; i++){
    for(j=0; j<3; j++){
        cout << "Digite o valor para preencher a matriz [" << i << ", " << j << "]:";
        cin >> matriz[i][j];
    }
   }

   cout << endl;

   //mostrar os valores na tela
      for(i=0; i<2; i++){
    for(j=0; j<3; j++){
        cout << matriz[i][j] << "\t";
    }
    cout << endl;
   }
    return 0;
}
