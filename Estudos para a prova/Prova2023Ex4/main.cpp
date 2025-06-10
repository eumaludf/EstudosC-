#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

float l(int a, int b, int c){
    float lucro;

    lucro = (a*c)-(b*c);
    return lucro;
}

int main() {
    fflush(stdin);

    int i, q;

    cout << "Programa para cadastrar produtoS e calcular LUCRO!" << endl;

    cout << "Quantas produtos você irá cadastrar? ";
    cin >> q;
    fflush(stdin);

    struct Prod {
        int cod;
        float pv;
        float pc;
        int x;
        float l;
    } p[q];

    for(i=0; i<q; i++){
        cout << "\nProduto " << i+1 << endl;

        fflush(stdin);
        cout << "Informe o código: ";
        cin >> p[i].cod;
        fflush(stdin);

        cout << "Informe o valor de custo do produto: ";
        cin >> p[i].pc;
        fflush(stdin);

        cout << "Informe o valor de venda do produto: ";
        cin >> p[i].pv;
        fflush(stdin);

        cout << "Informe a quantidade em estoque: ";
        cin >> p[i].x;
        fflush(stdin);

        // Calcula o Lucro
        p[i].l = l(p[i].pc, p[i].pv, p[i].x);

        cout << "O produto " << p[i].cod << " pode gerar R$" << p[i].l << " de lucro." << endl;
    }


    ofstream arq;
    arq.open("prova.txt", ios::app);

    if(arq.is_open()){
        for(i=0; i<q; i++){
            arq << fixed << setprecision(2);
            arq << "\nCódigo do produto: " << p[i].cod << endl;
            arq << "Valor de custo: " << p[i].pc << endl;
            arq << "Valor de venda: " << p[i].pv << endl;
            arq << "Quantidade em estoque: " << p[i].x << endl;
            arq << "Lucro possível: " << p[i].l << endl;

        }
        arq.close();
        cout << "\nDados gravados em imc.txt com sucesso!\n";
    }
    else {
        cout << "Não foi possível abrir ou criar o arquivo.\n";
    }

    return 0;
}
