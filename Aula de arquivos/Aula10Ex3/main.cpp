#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream arquivo;
    arquivo.open("ArquivoFor.txt");

    for(int i=0; i<=10; i++){
        arquivo << "Voc� est� salvando a execu��o n�mero: " << i << endl;
        cout << "Voc� est� salvando a execu��o n�mero: " << i << endl;
    }
    arquivo.close();
    return 0;
}
