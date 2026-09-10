#include <iostream>
#include <iomanip>
using namespace std;

// Divisores I
// https://judge.beecrowd.com/pt/problems/view/1157 

int main() {
    int n;

    cin >> n;

    for(int i=1; i<=n; i++) {
        if(n%i == 0) {
            cout << i << endl;
        }
    }

    return 0;
}
