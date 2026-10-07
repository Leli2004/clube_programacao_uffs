#include <iostream>
#include <string>
using namespace std;

// g++ -Wall 1084.cpp -o main

// 30/09
// Apagando e Vencendo
// https://judge.beecrowd.com/en/problems/view/1084
// objetivo: encontrar o valor máximo do prêmio

int main() {
  while (true) {
    int n; // número de dígitos do número que o apresentador escreveu no quadro
    int d; // número de dígitos que devem ser apagados
    string numero; // número que o apresentador escreveu

    cin >> n >> d;
    cin >> numero;

    if(n == 0 && d==0) break;

    int digitos = n-d; // tamanho da resposta
    string resposta="";

    int tam = numero.size();

    for (int i=0; i<tam; i++) {
        char c = numero[i];
        int ultimo = resposta.back();

        while (d > 0 && ultimo < c && !resposta.empty()) { 
            resposta.pop_back(); // remover ultimo elemento, que é o menos significativo
            d--;
        }

        resposta.push_back(c); // adicionar elemento no final
    }

    // se tem mais numeros do que deveria
    int respTam = resposta.size();
    if (respTam > digitos) {
        resposta.resize(digitos);
    }
    
    cout << resposta << endl;
  }

  return 0;
}

