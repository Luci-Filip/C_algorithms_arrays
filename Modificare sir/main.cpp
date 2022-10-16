/*
Modificare șir

Fiind dat un șir de n numere întregi, să se afișeze pe ecran șirul cu urmatoarele modificări:
Numerele de pe poziții pare vor fi înmulțite cu 2
Numerele de pe poziții impare vor fi scazute cu 1
Pozițiile elementelor în șir sunt numerotate de la 1 până la n.
Date de intrare
Se vor citi:
De pe prima linie, un număr întreg n
De pe a doua linie, un șir de n numere întregi, separate prin spații
Date de ieșire
Pe ecran se va afișa șirul modificat. Elementele șirului vor fi separate prin spații.
Restricții
n < 1 000
Numerele din șir vor fi mai mari decât -10 000 și mai mici decât 10 000
Exemplu

Date de intrare
5
1 2 3 4 5

Date de iesire
0 4 2 8 4
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
        if (i % 2 == 0)
            v[i] *= 2;
        if (i % 2 != 0)
            v[i] -= 1;
        cout << v[i] << " ";
    }
    return 0;
}
