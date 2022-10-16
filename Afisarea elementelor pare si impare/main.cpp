/*
Afișare elemente pare și impare
Fiind dat un șir de n numere întregi pozitive, să se afișeze pe ecran numerele șirului inițial, cu următoarele
modificări:
Numerele pare se vor afla pe primele poziții din șir, în ordine crescătoare a pozițiilor în șirul inițial.
Numerele impare se vor afla după numerele pare, în ordine descrescătoare a pozițiilor în șirul inițial.
Date de intrare
Se vor citi:
Un număr întreg n
Un șir de n numere întregi pozitive
Date de ieșire
Pe ecran se va afișa șirul modificat.
Restricții
n < 1 000
Numerele din șir vor fi mai mici sau egale cu 1 000
Exemplu
Date de intrare:     Date de ieșire:
5
1 8 7 4 5               8 4 5 7 1
*/

#include <iostream>
using namespace std;

int main() {
    int n, i, v[1000];
    cin >> n;
    for (i = 1; i <= n; ++i) {
        cin >> v[i];
    }
    for (i = 1; i <= n; ++i) {
        if (v[i] % 2 == 0)
            cout << v[i] << " ";
    }
    for (i = n; i >= 1; --i) {
        if (v[i] % 2 != 0)
            cout << v[i] << " ";
    }
    return 0;
}
