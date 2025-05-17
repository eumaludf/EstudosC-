#include <iostream>

using namespace std;

int main()
{
        fflush(stdin);

    int i, p;

    cout << "Bem-vindo ao estoque do seu mercadinho!" << endl;
    cout << "Quantos produtos vamos cadastrar hoje?";
    cin >> p;

    struct EstrtuturaMercado{
    char nome[60];
    int cod;
    int ano;
    float preco;
    char marca[20];
    int quantidade;
    } strProduto[p];

        fflush(stdin);

    for(i=0; i<p; i++){
        cout << "Informe o nome do produto: " << endl;
        cin.getline(strProduto[i].nome, 60);
            fflush(stdin);
        cout << "Informe o código do produto: " << endl;
        cin >> strProduto[i].cod;
            fflush(stdin);
        cout << "Informe o ano de fabricação: " << endl;
        cin >> strProduto[i].ano;
            fflush(stdin);
        cout << "Informe o preço: " << endl;
        cin >> strProduto[i].preco;
            fflush(stdin);
        cout << "Informe a marca do produto: " << endl;
        cin.getline(strProduto[i].marca, 20);
            fflush(stdin);
        cout << "Informe a quantidade: " << endl;
        cin >> strProduto[i].quantidade;

        fflush(stdin);
    }

    cout<< endl;
    cout<< "Produtos cadastrados: " << endl;

    for(i=0; i<p; i++){
        cout<< "Nome: " << (strProduto[i].nome) << ", ";
          cout<< "codigo: " << (strProduto[i].cod) << ", ";
            cout<< "ano de fabricação: " << (strProduto[i].ano) << ", " ;
        cout<< "preço: " << (strProduto[i].preco) << ", ";
          cout<< "marca: " << (strProduto[i].marca) << " e ";
            cout<< "quantidade desse produto: " << (strProduto[i].quantidade) << endl;
       cout << endl;
    }
}
