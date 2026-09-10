#include <iostream>
#include <iomanip>
using namespace std;

// Número Perfeito
// https://judge.beecrowd.com/pt/problems/view/1164

int somaDivisores(int n) {
    int soma = 0;
    for(int i=1; i<n; i++){
        if(n%i == 0) soma += i;
    }
    return soma;
}

bool ehPerfeito(int n) {
    return somaDivisores(n) == n;
}

int main() {
    int n, x;

    cin >> n;
    if (n < 1 || n > 20) return 0;

    for(int i=0; i<n; i++) {
        cin >> x;

        if (x < 1 || x > 1000000000) return 0;

        if(ehPerfeito(x)) cout << x << " eh perfeito" << endl;
        else cout << x << " nao eh perfeito" << endl;
    }

    return 0;
}
