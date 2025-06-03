#include <iostream>
#include <locale.h>


using namespace std;

int main()
{
   setlocale(LC_ALL, "Portuguese");

    float vetor[15], v[15];
    int i;
    float m;

   for(i=0; i<4; i++){
    cout << "Digite a nota da prova 1 do aluno " << i+1 << ":";
    cin >> vetor[i];
    cout << "Digite a nota da prova 2 do aluno " << i+1 << ":";
    cin >> v[i];
   }

   cout<< endl;
   cout<< "Situação dos alunos: " << endl;
    for(i=0; i<4; i++){
    cout << "---------------------------------------" << endl;
    cout << "P1 = " << vetor[i] << " P2 = " << v[i] << endl;
    cout << "Média = " << (vetor[i] + v[i])/2 << endl;
    m = (vetor[i] + v[i])/2;;
    if ( m >= 6 ){
        cout << "Aprovado" << endl;
    }
    else{
        cout << "Reprovado" << endl;
    }
   }

    return 0;
}
