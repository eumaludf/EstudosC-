#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream arquivo;
    arquivo.open("ArquivoForNomes.txt", ios::app);

    string nome;
    if(arquivo.is_open()){
    for(int i=1; i<=10; i++){
        cout << "Digite um nome: " << endl;
            cin >> nome;
        arquivo << endl << nome;

    }
    arquivo.close();
    }
    else{
        cout << "N�o foi poss�vel abrir ou criar o arquivo.";
    }
    return 0;
}
