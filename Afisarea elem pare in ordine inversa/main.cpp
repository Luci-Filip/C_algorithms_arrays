/*
Afișarea elementelor pare în ordine inversă  2077
Se dă un șir de n numere naturale. Să se afișeze elementele pare în ordine inversă a pozițiilor.
Date de intrare
Pe prima linie se citește numărul natural n, iar pe urmatoarea linie n numere naturale, separate prin spații.
Date de ieșire
Programul va afișa pe ecran numerele cerute, separate prin spații.
Restricții
n <= 1 000
0 < valorile din șir <= 1 000
Exemplu
Date de intrare         Date de ieșire
4
1 2 3 4                     4 2
*/

#include <iostream>
using namespace std;

int main() {
    int n, i, v[1000];
    cin >> n;
    for (i = 1; i <= n; ++i) {
        cin >> v[i];
    }
    for (i = n; i >= 1; --i) {
        if (v[i] % 2 == 0)
        cout << v[i] << " ";
    }
    return 0;
}
