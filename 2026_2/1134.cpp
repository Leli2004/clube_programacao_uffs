#include <iostream>
using namespace std;

// Tipo de combustível
// https://judge.beecrowd.com/en/problems/view/1134

void abastace(int* a, int* g, int* d) {
    int c;
    cin >> c;

    if(c == 4) {
        return;
    } 

    if (c == 1) *a += 1;
    else if (c == 2) *g += 1;
    else if (c == 3) *d += 1;

    abastace(a, g, d);
}

int main() {
    int a=0, g=0, d=0;

    abastace(&a, &g, &d);

    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << a << endl;
    cout << "Gasolina: " << g << endl;
    cout << "Diesel: " << d << endl;

    return 0;
}
