#include <iostream>
#include <locale.h>


using namespace std;

int main()
{
   setlocale(LC_ALL, "Portuguese");

   int i;

    float v[15], s, m, x, z;
    // x - n�meros s�o igual a 4
    // z - maiores que a m�dia

    for(i=0; i<15; i++){
        cout << "Digite o " << i << "� valor do vetor:";
        cin >> v[i];
        s = s + v[i];
    }

    m = s / 15;

    cout << endl;
    cout << "A m�dia dos valores digitados foi: " << m << endl;

    for(i=0; i<15; i++){
        if(v[i]==4){
            x += 1;
        }
        if(v[i]>m){
            z += 1;
        }
    }

    cout << "No vetor existem:" << x << " n�meros iguais a 4 e " << z << " n�meros maiores que a m�dia.";

    return 0;
}
