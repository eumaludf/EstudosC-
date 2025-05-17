#include <iostream>
#include <cstdlib>
#include <cstring>
#include <locale.h>
#include <cctype>
#include <iomanip>

using namespace std;

int main()
{

     setlocale(LC_ALL, "Portuguese");
    char t[] = "Palavra";
    char *ptr;
    cout << "Substituindo os caracteres por * ne palavra: "<< t << endl;
   cout << "Substituindo " << strset(t, '*');
    return 0;
}
