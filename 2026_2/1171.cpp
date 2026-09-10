#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;

// Frequência de Números
// https://judge.beecrowd.com/pt/problems/view/1171

void printVector(const vector<int>& v) {
    int tam = v.size();
    cout << "\n";
    for (int i=0; i<tam; i++) {
        cout << v[i] << endl;
    }
}

void ordenaVector(vector<int>& v) {
    sort(v.begin(), v.end());
}

int main() {
    int n;

    cin >> n;

    vector<int> vetor; // biblioteca vector
    vetor.reserve(n); // tamanho máximo 

    while (n--) {
        int x;
        cin >> x;
        vetor.push_back(x);
    }

    ordenaVector(vetor);
    //printVector(vetor);

    int tam = vetor.size();

    for (int i=0; i<tam; i++) {

        // Só conta quando é o primeiro elemento daquele valor int, pois o vetor está ordenado
        if(i==0 || vetor[i] != vetor[i-1]) {
            int qtd = count(vetor.begin(), vetor.end(), vetor[i]);

            if (qtd > 0) {
                cout << vetor[i] << " aparece " << qtd << " vez(es)" << endl;
            }
        }
    }

    return 0;
}
