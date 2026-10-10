#include <iostream>
using namespace std;

// Resto de uma divisão
// https://judge.beecrowd.com/en/problems/view/1133

void imprime(int x, int y) {
    if(x == y) return;

    if (x % 5 == 2 || x % 5 == 3) {
        cout << x << endl;
    }

    imprime(x+1, y);
}

int main() {
    int x, y;

    cin >> x >> y;

    if (x > y) {
        swap(x, y);
    }

    imprime(x+1, y);

    return 0;
}
