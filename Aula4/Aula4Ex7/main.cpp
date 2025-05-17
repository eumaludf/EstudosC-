#include <iostream>
#include <cstdlib>
#include <cstring>
#include <locale.h>
#include <cctype>

using namespace std;

int main()
{
    int i = 1, num;

    setlocale(LC_ALL, "Portuguese");

    cout << "Informe um número: " << endl;
    cin >> num;
    cout << "Os dez antecessores de: "<< num << "são" << endl;

    do{
        cout << num - i << endl;
        i = i + 1;
    } while (i<= 10);

    return 0;
}
