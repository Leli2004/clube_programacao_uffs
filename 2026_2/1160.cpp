#include <iostream>
using namespace std;

// Crescimento Populacional
// https://judge.beecrowd.com/pt/problems/view/1160

int main() {
    int PA, PB; // população A e população B
    float G1, G2; // crescimento populacional A e crescimento populacional B (em %)
    int t;

    cin >> t;
    for(int i=0; i<t; i++) {
        cin >> PA >> PB >> G1 >> G2;

        int anos = 0;
        while(PA <= PB) {
            PA += (PA * G1) / 100;
            PB += (PB * G2) / 100;
            anos++;

            if(anos > 100) {
                break; 
            } 
        }


        if (anos > 100) {
            cout << "Mais de 1 seculo." << endl;
        } else {
            cout << anos << " anos." << endl;
        }
    }

    return 0; 
}
