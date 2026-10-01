#include <iostream>
#include <vector>
using namespace std;

// 16/10
// Máquinas de fábrica
// https://cses.fi/problemset/task/1620/

// Verifica se as máquinas produzem pelo menos t produtos
bool consegue(vector<long long>& v, long long tempo, long long t) {
    long long total = 0;

    for (int i=0; i<v.size(); i++) {
        total += tempo / v[i]; // qtd de produtos que a máquina i faz

        if (total >= t) {
            return true; // já bastou, para evitar overflow
        }
    }

    return false;
}

int main() {
    int n;      // qtd de máquinas
    long long t; // qtd de produtos que precisam ser feitos

    cin >> n >> t;

    vector<long long> v(n); // tempo que cada máquina leva para fazer 1 produto
    long long menor = 1000000000; // menor tempo entre as máquinas

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] < menor) menor = v[i];
    }

    // Limite máximo: a máquina mais rápida sozinha faria os t produtos em menor * t
    long long ini = 1, fim = menor * t, mid;
    long long resposta = fim;

    while (ini <= fim) {
        mid = (ini + fim) / 2;

        if (consegue(v,mid,t)) {
            resposta = mid;  // funciona, guarda e tenta um tempo menor
            fim = mid - 1;
        } else {
            ini = mid + 1;   // não funciona, precisa de mais tempo
        }
    }

    cout << resposta;
    return 0;
}
