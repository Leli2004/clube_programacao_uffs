#include <iostream>
using namespace std;

// Pum
// https://judge.beecrowd.com/en/problems/view/1142

void pum(int x, int n) {
    if (n == 0) return;

    cout << x << " " << x+1 << " " << x+2 << " " << "PUM\n"; 
    pum(x + 4, n-1);
}

int main() {
    int n;
    cin >> n;

    pum(1, n);

    return 0;
}
