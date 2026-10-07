#include <iostream>
#include <string>
using namespace std;

// g++ -Wall 1222.cpp -o main

// 30/09
// Short Story Competition
// https://judge.beecrowd.com/en/problems/view/1222
// objetivo: usar o menor número possível de páginas

int main() {
    int n; // número de palavras do conto N (2 ≤ N ≤ 1000)
    int l; // número máximo de linhas por página L (1 ≤ L ≤ 30)
    int c; // número máximo de caracteres por linha C (1 ≤ C ≤ 70)

    while(cin >> n >> l >> c) {
        int caracteres = 0; // quantos caracteres já existem na linha atual
        int linhas = 1;

        string palavra; // informada pelo usuário

        for (int i=0; i<n; i++) {
            cin >> palavra;

            int tam = palavra.size();

            if (caracteres == 0) {
                caracteres = tam;
            } else if (caracteres + tam + 1 <= c) {
                caracteres += tam + 1;
            } else {
                linhas++;
                caracteres = tam;
            }
        }

        int resposta = (linhas + l-1) / l;
        cout << resposta << endl;
    }

    return 0;
}
