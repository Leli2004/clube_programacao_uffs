#include <iostream>
#include <iomanip>
using namespace std;

// Soma de Pares Consecutivos
// https://judge.beecrowd.com/pt/problems/view/1159

int main() {
    int n;

    while(true) {
        cin >> n;

        if(n==0) break;

        if(n%2 != 0) n++;

        int soma=0;

        for(int i=0; i<5; i++) {
            soma += n;
            n += 2;
        }

        cout << soma << endl;
    }

    return 0;
}
