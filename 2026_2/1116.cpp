#include <iostream>
#include <iomanip>
using namespace std;

// Dividindo X por Y
// https://judge.beecrowd.com/pt/problems/view/1116

int main() {
    int n;
    float x, y;

    cin >> n;

    for(int i=0; i<n; i++) {
        cin >> x >> y;

        if(y==0){
            cout << "divisao impossivel" << endl;
        } else {
            cout << fixed << setprecision(1);
            cout << x/y << endl;
        }
    }

    return 0;
}
