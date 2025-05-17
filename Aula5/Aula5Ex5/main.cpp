#include <iostream>
#include <cstdlib>
#include <cstring>
#include <locale.h>
#include <cctype>
#include <iomanip>

using namespace std;

int main()
{
    int i;
    float soma = 0;
    const int max = 10;

    setlocale(LC_ALL, "Portuguese");

    cout << setprecision(2);

    for (i = 0; i< max; i++)
    {
        cout << "Nota " << (i+1) << " = " << endl;
        float nota;
        cin >> nota;
        soma = soma + nota;
    }
    cout << "Media = " << (soma/max) << endl;

    return 0;
}
