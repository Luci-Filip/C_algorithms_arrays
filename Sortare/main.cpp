/*
Sortare

Fiecare locuitor al unui oraş a donat o sumă de bani pentru realizarea unui centru de excelenţă în informatică.
Pentru a determina care este valoarea cea mai mare care s-a donat, primarul oraşului te-a angajat să creezi un
program care să sorteze crescător toate valorile donate. Fiindcă nu işi permite să piardă timp, te-a rugat să faci
un program care să execute sortarea într-un timp cât mai scurt posibil.
Date de intrare
Se citește de la tastatură un număr n, urmat de un șir de n numere naturale.
Date de ieșire
Programul va afișa pe ecran elementele șirulului sortat în ordine crescătoare.
Restricții și precizări
0 < n ≤ 100 000
elementele șirului sunt numere cuprinse intre 0 și 500, inclusiv.
Exemplu
Date de intrare
10
15 47 98 23 145 74 89 32 1 74
Date de ieșire
1 15 23 32 47 74 74 89 98 145
*/

#include <iostream>
using namespace std;

int main() {
    int n, fr[501], v[100001];
    cin >> n;
    for (int i = 1; i < 501; ++i) {
        fr[i] = 0;
    }
    for (int i = 1; i <= n; ++i) {
        cin >> v[i];
        ++fr[v[i]];
    }
    for (int i = 1; i < 501; ++i)
        for (int j = 1; j <= fr[i]; ++j) {
            cout << i << " ";
        }
    return 0;
}
