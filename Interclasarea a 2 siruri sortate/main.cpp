/*
 WellCode
https://learn.wellcode.ro/page/interclasare 1/2
Interclasarea a două șiruri sortate  1311
Se dau două șiruri v și w cu n respectiv m elemente întregi în ordine crescătoare. Să se afișeze elementele celor
două șiruri în ordine crescătoare.
Date de intrare
De la tastatură se va citi numărul n și un șir de n numere întregi, reprezentând elementele șirului v. Pe urmă se va
citi numărul m și un șir de m numere întregi reprezentând elementele șirului w.
Date de ieșire
Pe ecran se vor afișa elementele celor două șiruri în ordine crescătoare.
Restricții și precizări
1 ≤ n, m ≤ 100 000
-2 000 000 000 ≤ v[i], w[i] ≤ 2 000 000 000
Exemplu

Date de intrare         Date de ieșire
3                       -1 0 1 2 4 6 7
1 4 6
4
-1 0 2 7
*/

#include <iostream>
using namespace std;

int main() {
    int n, m, j, i, k, v1[100000], v2[100000], v3[200000];
    cin >> n;
    for (i = 1; i <= n; ++i) {
        cin >> v1[i];
    }
    cin >> m;
    for (j = 1; j <= m; ++j) {
        cin >> v2[j];
    }
    for (k = 1; k <= n + m; ++k) {
        v3[k] = 0;
    }
    i = 1;
    j = 1;
    k = 1;
    while (i <= n && j <= m) {
        if (v1[i] < v2[j]) {
            v3[k] = v1[i];
            ++i;
        }
        else {
            v3[k] = v2[j];
            ++j;
        }
        ++k;
    }
    if (j <= m) {
        for (int index = j; index <= m; ++index) {
            v3[k] = v2[index];
            ++k;
        }
    }
    if (i <= n) {
        for (int index = i; index <= n; ++index) {
            v3[k] = v1[index];
            ++k;
        }
     }
    for (i = 1; i <= n + m; ++i) {
       cout << v3[i] << " ";
    }
    return 0;
}
