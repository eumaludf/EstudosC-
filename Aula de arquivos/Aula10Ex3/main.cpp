#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream arquivo;
    arquivo.open("ArquivoFor.txt");

    for(int i=0; i<=10; i++){
        arquivo << "Você está salvando a execução número: " << i << endl;
        cout << "Você está salvando a execução número: " << i << endl;
    }
    arquivo.close();
    return 0;
}
