#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream arquivo; // arquivo apenas para saída de dados
    arquivo.open("Arquivo.txt"); // abre o arquivo ou o cria se ele não existir
    arquivo << "Olá, este é um arquivo criado a partir de C++" << endl;
    arquivo << "Autora: Maria Luiza Duarte";
    arquivo.close();

    /* outra forma
    ofstream arquivo("nomes.txt"); // arquivo apenas para saída de dados
    if(arquivo.is_open()){
    arquivo << "Olá, este é um arquivo criado a partir de C++" << endl;
    arquivo << "Autora: Maria Luiza Duarte";
     arquivo.close();
     } */

    return 0;
}


