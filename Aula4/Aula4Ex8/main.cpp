#include <iostream>
#include <cstdlib>
#include <cstring>
#include <locale.h>
#include <cctype>

using namespace std;

int main()
{
    int i = 0, num;

    setlocale(LC_ALL, "Portuguese");

    do{
    cout << "Informe um n�mero: " << endl;
    cin >> num;
        i = i + 1;
    } while (num != 0);

    cout << "Voc� informou: " << i << " n�meros" << endl;

    return 0;
}
