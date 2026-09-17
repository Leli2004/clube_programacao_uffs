#include <iostream>
using namespace std;

// Posso fazer um quadrado
// https://codeforces.com/problemset/problem/1915/C?locale=ru

bool busca(int x) {
    int ini=0, fim=x, mid;

    while(ini <= fim) {
        mid = (ini + fim) / 2;
        
        if(mid*mid == x) return true;

        if(mid*mid > x) fim = mid-1;
        else ini = mid+1;
    }

    return false;
}

int main() {
    int n; // n de baldes
    int soma; // qtd total de quadrados
    int qtd; // qtd de quadrados em cada balde

    cin >> n;

    for(int i=0; i<n; i++) {
        cin >> qtd;
        soma = soma + qtd;
    }

    bool find = busca(soma);

    if(find == true) cout << "SIM";
    else cout << "NÃO";

    return 0;
}
