#include <iostream>
#include <cstdlib>
#include <cstring>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int idade;

    cout << "Digite sua idade!" << endl;
    cin >> idade;
    if (idade >= 18){
        cout << "Voc� � maior de idade." << endl;
    }
    else{
        cout << "Voc� � menor de idade." <<endl;
    }
    return 0;
}
