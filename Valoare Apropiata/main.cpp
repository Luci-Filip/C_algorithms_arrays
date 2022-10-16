/*
Valoare apropiată

Pasiunea lui Cosmin pentru jocuri video l-a determinat să se apuce de programare, pentru a putea crea și el
jocuri pentru alți oameni. După ce a lansat câteva aplicații simple pe Play Store, a construit un joc multiplayer.
Dinamica jocului e următoarea:
Fiecare jucător primește la început un cartonaș cu un șir de n numere naturale
Pentru a câștiga, jucătorul trebuie să identifice corect PERECHEA fiecărui număr din șirul de pe cartonașul
său de joc.
O pereche a unei valori x din șirul de pe un cartonaș este un număr y care face parte din același șir și are
următoarea proprietate:
dacă x se află pe poziție pară, y e minimul dintre numerele mai mari decât x care se găsesc în stânga lui x în
șir
dacă x se află pe poziție impară, y e minimul dintre numerele mai mari decât x care se găsesc în dreapta lui
x în șir
Date de intrare
Pe prima linie se va găsi un număr natural n, reprezentând numărul total de valori de pe un cartonaș, iar pe
următoarea linie un șir de n numere naturale, reprezentând elementele șirului de numere de pe acel cartonaș.
Date de ieșire
Programul va afișa pe ecran un șir de n numere, reprezentând șirul de perechi corespunzătoare fiecărui element x
din șir. Dacă există un număr x care nu are o astfel de pereche în șir, se va afișa valoarea -1 în locul perechii sale.
Restricții și precizări
0 < n ≤ 100
0 ≤ x ≤ 1 000
Exemplu
Date de intrare
7
24 248 456 0 35 74 554
Date de ieșire
35 -1 554 24 74 248 -1
*/
#include <iostream>
using namespace std;

int main() {
    int n, i, j,vmin = 1001, v[1001];
    cin >> n;
    for (i = 1; i <= n; ++i) {
        cin >> v[i];
    }
    for (i = 1; i <= n; ++i) {
        vmin = 1001;
        if (i % 2 != 0) {
            for (j = i + 1; j <= n; ++j) {
                if (v[i] < v[j] && v[j] < vmin) {
                    vmin = v[j];
                }
            }
        } else {
             for (j = i - 1; j >= 1; --j) {
                if (v[i] < v[j] && v[j] < vmin) {
                    vmin = v[j];
                }
             }
         }
        if (vmin == 1001) {
            cout << "-1" << " ";
        } else {
            cout << vmin << " ";
        }
    }
    return 0;
}
