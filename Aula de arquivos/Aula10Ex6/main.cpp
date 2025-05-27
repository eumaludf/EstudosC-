#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string linha;
    fstream arq;
    arq.open("nomes.txt", ios::out | ios::app);
    if(arq.is_open()){
        arq << "Maria Luiza Duarte" << endl;
        arq << "Leonardo Miranda" << endl;
        arq.close();

        arq.open("nomes.txt", ios::in);
        while(!arq.eof()){
            getline(arq, linha);
            cout << linha << endl;
        }
        arq.close();
    }
    else{
        cout << "Não foi possível abrir o arquivo.";
    }
    return 0;
}
