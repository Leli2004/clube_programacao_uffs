#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

// 16/10
// Ingressos para shows
// https://cses.fi/problemset/task/1091/

int main() {
    int n, m; 

    cin >> n; // qtd de ingressos disponiveis
    cin >> m; // qtd de clientes

    if(n<1 || m<1 || n>1000000 || m>1000000) return 0;

    multiset<int> ingressos; // biblioteca set

    for (int i = 0; i < n; i++) {
        cout << "\nInforme o preço do ingresso "<< i+1 << ": " << endl;
        int x;
        cin >> x;
        ingressos.insert(x);
    }

    for (int i = 0; i < m; i++) {
        cout << "\nInforme o máximo preço do cliente "<< i+1 << ": " << endl;
        int cliente;
        cin >> cliente;

        // encontra o valor -> retorna um iterador para o primeiro elemento que é estritamente maior do que um valor específico
        auto it = ingressos.upper_bound(cliente);

        if(it==ingressos.begin()) {
            cout << "OUTPUT: " << -1 << endl;
        } else {
            --it;

            cout << "OUTPUT: " << *it << endl;
            
            ingressos.erase(it);
        }
    }

    return 0;
}
