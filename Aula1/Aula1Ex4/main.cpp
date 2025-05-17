#include <iostream>

using namespace std;

int main()
{
    bool n1, n2;

    cout << "OPERADORES LÓGICOS! " << endl;
    cout << "Digite dois números: " << endl;
    cin >> n1 >> n2;
    cout << "A negação do primeiro: " << !n1 << endl;
    cout << "A op. AND entre o primeiro e o segundo: " << (n1 && n2) << endl;
    cout << "A op. OR entre o primeiro e o segundo: " << (n1 || n2) << endl;

    return 0;
}
