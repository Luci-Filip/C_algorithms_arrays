/*
Permutări circulare

Cerință
Considerăm un șir format din n elemente. Definim următoarele operații astfel:
permutare circulară la stânga: mutarea primului element la sfârșitul șirului 1 2 3 4 -> 2 3 4 1 -> 3 4 1 2
permutare circulară la dreapta: mutarea ultimului element la începutul șirului 1 2 3 4 -> 4 1 2 3 -> 3 4 1 2
Dându-se un șir format din n elemente și două numere k și p, să se permute cu k poziții la dreapta dacă p este -1,
respectiv la stânga dacă p este 1.
Date de intrare
Pe prima linie se află 3 numere: n , k și p. Pe următoarea linie se găsesc n numere naturale, reprezentând
elementele șirului.
Date de ieșire
Se vor afișa n numere pe o singură linie, separate printr-un spațiu, reprezentând elementele șirului obținut în urma
operațiilor de permutare.
Restricții
1 ≤ n ≤ 1 000 000
0 ≤ k ≤ 1 000 000
Elementele șirului sunt numere naturale cuprinse între 1 și 1 000
p poate avea doar valorile 1 și -1
Exemplu
Date de intrare
4 1 -1
1 2 3 4
Date de ieșire
4 1 2 3
Date de intrare
4 2 1
1 2 3 4
Date de iesire
3 4 1 2
*/

#include <iostream>
using namespace std;

int main() {
    int n, k, p, i, q = 1, v[100], w[1000];
    cin >> n >> k >> p;
    for (int i = 1; i <= n; ++i) {
        cin >> v[i];
    }
    if (k > n) {
        k = k % n;
    }
    //permutare la dreapta daca p = -1
    if (p == -1) {
        for (i = n - k + 1; i <= n; ++i) {
            w[q] = v[i];
            ++q;
        }
        for (i = n - k; i >= 1; --i) {
            v[i + k] = v[i];
        }
        for (i = 1; i <= k; ++i) {
            v[i] = w[i];
        }
    }
    //permutare la stanga daca p = 1
    if (p == 1) {
        for (i = 1; i <= k; ++i) {
            w[q] = v[i];
            ++q;
        }
        for (i = 1; i <= n - k; ++i) {
            v[i] = v[i + k];
        }
        for (i = 1; i <= k; ++i) {
            v[n - k + i] = w[i];
        }
    }
    for(i = 1; i <= n; ++i)
        cout << v[i] << " ";
    return 0;
}
