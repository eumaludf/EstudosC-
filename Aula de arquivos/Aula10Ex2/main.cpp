#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream arq; // arquivo apenas para saída de dados

    // ios::app - abre o arquivo anterior e continua após o último caractere

    arq.open("nomes.txt", ios::app);

    if(arq.is_open()){ // abre o arquivo ou o cria se ele não existir
    arq << "Olá, este é um arquivo criado a partir de C++ que salva as alterações sem perder o conteúdo anterior." << endl;
    arq << "Autora: Maria Luiza Duarte";
    arq.close();
    }
    else {
        cout <<"Não foi possível abrir ou criar o arquivo.";
    }
    return 0;
}


