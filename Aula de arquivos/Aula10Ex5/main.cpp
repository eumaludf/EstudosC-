#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

int main()
{
    string texto;

    ifstream arq ("ArquivoForNomes.txt");

    if(arq.is_open()){

        while(! arq.eof()){
            getline (arq, texto);
            cout << texto << endl;
        }
        arq.close();
    }else{
        cout << "N�o foi poss�vel abrir o arquivo.";
    }
    return 0;
}
