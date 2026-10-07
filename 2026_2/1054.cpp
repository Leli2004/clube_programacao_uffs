#include <iostream>
#include <cctype> 
#include <vector>
#include <algorithm>
#include <stdio.h>
using namespace std;

// g++ -Wall 1054.cpp -o main

// 30/09
// Dynamic Frog
// https://judge.beecrowd.com/en/problems/view/1054

int main() {
    int t;
    int i = 1;

    cin >> t;

    while(i <= t) {
        int n; // qtd de pedras
        int d; // distancia entre as margens esquerda e direita

        cin >> n >> d;

        vector<char> s(n); // tipo da pedra - B para tipo grande e S para tipo pequeno 
        vector<int> m(n); // distância dessa pedra da margem esquerda

        for (int j=0; j<n; j++) {
            // cin >> s[j];
            // cin >> m[j];
            scanf(" %c-%d", &s[j], &m[j]);
        }

        int resposta = 0; // maior pulo
        int s1 = 0, s2 = 0; // ultima posicao do sapo1 e sapo2, respectivamente

        for(int j=0; j<n; j++) {
            
            if (s[j] == 'B') {
                // pedra B: os dois sapos podem pisar nela, então ambos pulam para ela
                resposta = max(resposta, m[j]-s1);
                s1 = m[j];

                resposta = max(resposta, m[j]-s2);
                s2 = m[j];

            } else {
                // pedra S: só um sapo pisa nela, aquele que estiver mais atras
                if(s1 < s2) {
                    resposta = max(resposta, m[j]-s1);
                    s1 = m[j];
                } else {
                    resposta = max(resposta, m[j]-s2);
                    s2 = m[j];
                }
            }
            
        }

        resposta = max(resposta, d-s1);
        resposta = max(resposta, d-s2);

        cout << "Case " << i << ": " << resposta << endl;
        i++;
    }

    return 0;
}

/*
Esperado:
3

1 10
B-5
Caso 1: 5 (resposta)

1 10
S-5
Caso 2: 10 (resposta)

2 10
B-3 S-6
Caso 3: 7 (resposta)
*/
