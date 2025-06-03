#include <iostream>

using namespace std;

int maior(int, int);

int main()
{
    int a, b;

    cout << "Digite o primeiro número: ";
    cin >> a;
     cout << "Digite o segundo número: ";
    cin >> b;

    cout << "O maior número é: " << maior(a,b);

    return 0;
}

maior(int y, int z){
    int maior = 0;
    if (y>z){
        maior = y;
    }
    else if(z>y){
        maior = z;
    }
return maior;
}
