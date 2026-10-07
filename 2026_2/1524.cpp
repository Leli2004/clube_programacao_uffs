#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// g++ -Wall 1524.cpp -o main

// 30/09
// Cafeteria Queue
// https://judge.beecrowd.com/en/problems/view/1524

int main(){
    int n = 0; // n° de pessoas na fila
    int k = 0; // n° de grupos (1 ≤ K < N ≤ 1.000)
   
    while (cin >> n >> k) {
        if (n<1 || n>1000) continue;
        if (k<1 || k>1000) continue;

        // posições de cada pessoa até a primeira pessoa da fila
        vector<int> v(n);
        v[0] = 0;

        for(int i=1; i<n; i++) {
            int a;
            cin >> a;
            if (a<0 || a>1000000) continue;
            v[i] = a;
        }

        sort(v.begin(), v.end()); // ordenar crescente

        // distancias entre pessoas vizinhas
        vector<int> p(n-1); 

        for(int i=0; i<n-1; i++) {
            p[i] = v[i+1] - v[i];
        }

        sort(p.begin(), p.end(), greater<int>()); // ordenar decrescente

        // Calcular resposta
        int total = v[n-1];
        int desconto = 0;

        for(int i=0; i<k-1; i++) {
            desconto += p[i];
        }

        int resposta = total - desconto;
        cout << resposta << endl;

        // // teste imprimir 
        // cout << "\nImprimindo V..." << endl;
        // int tam = v.size();
        // for(int j=0; j<tam; j++) {
        //     cout << v[j] << endl;
        // }
        // cout << "\nImprimindo P..." << endl;
        // tam = p.size();
        // for(int j=0; j<tam; j++) {
        //     cout << p[j] << endl;
        // }
        // cout << "\nImprimindo resposta..." << endl;
        // cout << resposta << endl;
    }

    return 0;
}
