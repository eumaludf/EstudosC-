#include <iostream>
#include <locale.h>


using namespace std;

int main()
{
   setlocale(LC_ALL, "Portuguese");

   int q, i;

    cout << "Quantos produtoes voc� ir� lan�ar?";
    cin >> q;

    float v[q], s;

    for(i=0; i<q; i++){
        cout << "Digite o pre�o do produto " << i << ":";
        cin >> v[i];
        s = s + v[i];
    }

    cout << "O pre�o total da compra foi: " << s;

    return 0;
}
