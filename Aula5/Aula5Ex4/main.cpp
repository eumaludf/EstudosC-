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

    setlocale(LC_ALL, "Portuguese");

    for ( i=3; i<=100; i+=3)
    cout << setw(5) << i << endl;
    return 0;
}
