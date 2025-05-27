#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream arq; // arquivo apenas para sa�da de dados

    // ios::app - abre o arquivo anterior e continua ap�s o �ltimo caractere

    arq.open("nomes.txt", ios::app);

    if(arq.is_open()){ // abre o arquivo ou o cria se ele n�o existir
    arq << "Ol�, este � um arquivo criado a partir de C++ que salva as altera��es sem perder o conte�do anterior." << endl;
    arq << "Autora: Maria Luiza Duarte";
    arq.close();
    }
    else {
        cout <<"N�o foi poss�vel abrir ou criar o arquivo.";
    }
    return 0;
}


