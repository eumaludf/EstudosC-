#include <iostream>

using namespace std;

int main()
{

    int i, j;

  int matriz[6][6];

   //preencher a matriz
   for(i=0; i<6; i++){
    for(j=0; j<6; j++){
        cout << "Digite o valor para preencher a matriz [" << i+1 << ", " << j+1 << "]:";
        cin >> matriz[i][j];
    }
   }

   cout << endl;

    //mostrar os valores na tela
      for(i=0; i<6; i++){
    for(j=0; j<6; j++){
        cout << matriz[i][j] << "\t";
    }
    cout << endl;
   }

    cout << endl;

   //mostrar a diagonal secundária
    cout << "Diagonal secundária na matriz:\n";
    for(i = 0; i < 6; i++) {
        for(j = 0; j < 6; j++) {
            if(i + j == 5) {
                cout << matriz[i][j] << "\t";
            } else {
                cout << "\t";
            }
        }
        cout << endl;
    }

    return 0;
}
