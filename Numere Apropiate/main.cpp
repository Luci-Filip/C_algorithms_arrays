/*
Numere Apropiate

Andrei și-a creat propriul său joc, care este destul de ușor de jucat. Fiecare jucător trebuie să iși aleagă câte un
cartonaș de joc care conține un șir de n numere naturale. Pentru a câștiga, concurentul trebuie să descopere cel
mai rapid VECINUL VALORIC al fiecărei valori din șir.
Un vecin valoric al unei valori x dintr-un șir este un număr y cu proprietatea că y e minimul dintre toate numerele
din șir mai mari decât x.
Pentru a se asigura că poate să câștige de fiecare dată, Andrei te-a rugat să îi creezi un program care determină
vecinii valorici ai celor n elemente din șirul de numere de pe un cartonaș de joc.
Date de intrare
Se citește de la tastatură un număr natural n, reprezentând numărul de elemente de pe un cartonaș de joc,
urmat de un șir de n numere naturale, reprezentând elementele șirului de numere de pe acel cartonaș.
Date de ieșire
Programul va afișa pe ecran un șir de n numere naturale reprezentând șirul de vecini valorici pentru fiecare
element x din șir. Dacă un element din șirul citit nu are vecin valoric, se va afișa "-1" pentru acesta.
Restricții și precizări
0 < n ≤ 100
0 ≤ x ≤ 1 000
Exemplu
Date de intrar
10
15 47 5 12 21 5 64 85 64 12
Date de ieșire
21 64 12 15 47 12 85 -1 85 15
*/

#include <iostream>
using namespace std;

int main() {
    int n, i, j, vmin = 1001, v[1001];
    cin >> n;
    for (i = 1; i <= n; ++i) {
        cin >> v[i];
    }
    for (i = 1; i <= n; ++i) {
        vmin = 1001;
        for (j = 1; j <= n; ++j) {
            if (v[i] < v[j] && v[j] < vmin) {
                vmin = v[j];
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
