#include <iostream>

using namespace std;

int main()
{

    int i, j;

  float matriz[4][5];

   //preencher a matriz
   for(i=0; i<4; i++){
    for(j=0; j<5; j++){
        cout << "Digite o valor para preencher a matriz [" << i+1 << ", " << j+1 << "]:";
        cin >> matriz[i][j];
    }
   }

   cout << endl;

    //mostrar os valores na tela
      for(i=0; i<4; i++){
    for(j=0; j<5; j++){
        cout << matriz[i][j] << "\t";
    }
    cout << endl;
   }

    cout << endl;

   //mostrar a matriz com os valores pela metade
    cout << "Matriz com os valores resultantes:" << endl;
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 5; j++) {
                cout << ((matriz[i][j])/2.0) << "\t";

        }
        cout << endl;
    }

    return 0;
}
