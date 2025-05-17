#include <iostream>

using namespace std;

int acheMaior(int a, int b, int c){

int maior;

maior = a;

if (b > maior && b > c){
    maior = b;
}

else if ( c > maior && c > b){
    maior = c;
}

return maior;

}

int main()
{
    int p, s, t, x, y, z, m1, m2;

    cout << "Digite três números do primeiro conjunto: " << endl;
    cin >> p >> s >> t;

    m1 = acheMaior(p, s, t);

    cout << "Digite três números do segundo conjunto: " << endl;
    cin >> x >> y >> z;

    m2 = acheMaior(x, y, z);

    cout << "A soma de " << m1 << " + " << m2 << " = " << m1 + m2;

    return 0;
}
