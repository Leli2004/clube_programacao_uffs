#include <iostream>
#include <iomanip>
using namespace std;

// Teste de Seleção 1
// https://judge.beecrowd.com/pt/problems/fullscreen/1035

int main() {
    int a,b,c,d;

    cin >> a >> b >> c >> d;

    if(b>c && d>a && (c+d)>(a+b) && c>0 && d>0 && a%2==0) {
        cout << "Valores aceitos" << endl;
    } else {
        cout << "Valores nao aceitos" << endl;
    }

    return 0;
}
