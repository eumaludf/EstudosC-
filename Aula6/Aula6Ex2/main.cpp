#include <iostream>
#include <cstdlib>
#include <cstring>
#include <locale.h>
#include <cctype>
#include <iomanip>

using namespace std;

int main()
{
    string nome;

     setlocale(LC_ALL, "Portuguese");
    cout << "Vamos conversar?" << endl;
    cout << "Qual seu nome? ";
    getline(cin, nome);
    cout << "\nBom dia, " << nome << ", tudo bem?" << endl;
    return 0;
}
