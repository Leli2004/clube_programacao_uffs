#include <iostream>
using namespace std;

// g++ -Wall 1132.cpp -o main

// Múltiplos de 13
// https://judge.beecrowd.com/en/problems/view/1132

int soma(int x, int y) {
    if(x > y) return 0;

    if(x % 13 != 0) {
        return x + soma(x+1, y);
    }

    return soma(x+1, y);
}

int main() {
    int x, y;

    cin >> x >> y;

    if (x > y) {
        int aux = x;
        x = y;
        y = aux;
    }

    cout << soma(x, y) << endl;

    return 0;
}
