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

    for ( i=1; i<=10; i++)
    cout << setw(5) << i << setw(10)<< " X 6 = " << setw(15) << i * 6 << endl;
    return 0;
}
