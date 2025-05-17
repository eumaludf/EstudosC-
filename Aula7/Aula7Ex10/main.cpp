#include <iostream>
#include <locale.h>


using namespace std;

int main()
{
   setlocale(LC_ALL, "Portuguese");

    int l, c, i, j;

  cout << "Qual será a quantidade de linhas da sua matriz 1?";
  cin >> l;
    cout << "Qual será a quantidade de colunas da sua matriz 1";
  cin >> c;
  int matriz1 [l][c];
  int matriz2 [l][c];

   //preencher a matriz
   for(i=0; i<l; i++){
    for(j=0; j<l; j++){
        cout << "Digite o valor para preencher a primeira matriz: [" << i << ", " << j << "]:";
        cin >> matriz1[i][j];
    }
   }

   //preencher a matriz
   for(i=0; i<l; i++){
    for(j=0; j<l; j++){
        cout << "Digite o valor para preencher a segunda matriz: [" << i << ", " << j << "]:";
        cin >> matriz2[i][j];
    }
   }



   cout << endl;
  int matrizSoma[l][c];

   // Soma das Matrizes
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            matrizSoma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    // Exibição da Matriz Soma
    cout << "\nMatriz Soma:" << endl;
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            cout << matrizSoma[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
