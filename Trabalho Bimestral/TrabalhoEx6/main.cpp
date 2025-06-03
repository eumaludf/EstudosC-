#include <iostream>

using namespace std;

int main()
{7

    int i, j;

  int matriz[4][4];

   //preencher a matriz
   for(i=0; i<4; i++){
    for(j=0; j<4; j++){
        cout << "Digite o valor para preencher a matriz [" << i+1 << ", " << j+1 << "]:";
        cin >> matriz[i][j];
    }
   }

   cout << endl;

   //mostrar os valores na tela
      for(i=0; i<4; i++){
    for(j=0; j<4; j++){
        cout << matriz[i][j] << "\t";
    }
    cout << endl;
   }
    return 0;
}
