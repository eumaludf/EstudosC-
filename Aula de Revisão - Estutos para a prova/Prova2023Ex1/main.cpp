#include <iostream>
#include <locale.h>


using namespace std;

int main()
{
   setlocale(LC_ALL, "Portuguese");

   int q, i;

    cout << "Quantos produtoes você irá lançar?";
    cin >> q;

    float v[q], s;

    for(i=0; i<q; i++){
        cout << "Digite o preço do produto " << i << ":";
        cin >> v[i];
        s = s + v[i];
    }

    cout << "O preço total da compra foi: " << s;

    return 0;
}
