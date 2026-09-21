#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 16/10
// Ingressos para shows
// https://cses.fi/problemset/task/1091/

int busca(vector<int> v, int x) {
    int ini=0, fim= v.size() - 1;
    int mid;
    int posicao = -1;

    while(ini <= fim) {
        mid = (ini + fim) / 2;
        
        if(v[mid] <= x) {
            posicao = mid;
            ini = mid+1;
        } else {
            fim = mid-1;
        }
    }
  
    return posicao;
}

int main() {
    int n, m; 

    cin >> n; // qtd de ingressos disponiveis
    cin >> m; // qtd de clientes

    if(n<1 || m<1 || n>1000000 || m>1000000) return 0;

    vector<int> v(n); // ingressos

    for (int i = 0; i < n; i++) {
        cout << "\nInforme o preço do ingresso "<< i+1 << ": " << endl;
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < m; i++) {

        cout << "\nInforme o máximo preço do cliente "<< i+1 << ": " << endl;
        int cliente;
        cin >> cliente;

        int pos = busca(v, cliente);

        if ( pos == -1) {
            cout << "OUTPUT: " << -1 << endl;
        } else {
            cout << "OUTPUT: " << v[pos] << endl;

            v.erase(v.begin() + pos); // remove o elemento
        }
    }

    return 0;
}
