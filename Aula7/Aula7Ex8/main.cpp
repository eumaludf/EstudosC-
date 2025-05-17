#include <iostream>
#include <locale.h>


using namespace std;

int main()
{
   setlocale(LC_ALL, "Portuguese");

    int l, i, j;

  cout << "Qual será a quantidade de linhas e colunas da sua matriz?";
  cin >> l;
  int matriz[l][l];

   //preencher a matriz
   for(i=0; i<l; i++){
    for(j=0; j<l; j++){
        cout << "Digite o valor para preencher a matriz [" << i << ", " << j << "]:";
        cin >> matriz[i][j];
    }
   }

   cout << endl;

   //mostrar os valores na tela
      for(i=0; i<l; i++){
    for(j=0; j<l; j++){
        if (i!=j){
        cout << matriz[i][j] << "\t";
        }
    }
    cout << endl;
   }
    return 0;
}
