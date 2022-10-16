/*
Element Lipsa 3

Curios de ce internetul de la tine de acasă merge mai lent în fiecare zi după ora 18, ai discutat cu vecinii tăi și ai
aflat că s-au abonat recent la Netflix. Coincidența face că și tu, și ei ajungeți acasă în fiecare zi după ora 18 și
rețeaua se aglomerează subit.
Dacă într-o problemă anterioară ai încercat să afli pachetul dintr-un șir de n pachete transmise care e pierdut pe
drum și nu mai ajunge la destinație, de data asta se pierd m pachete pe drum.
Cerință
Ți se dă un șir de n numere întregi, reprezentând pachetele trimise și un alt șir cu n - m numere întregi,
reprezentând pachetele care au ajuns cu succes până la tine. Elementele din cel de-al doilea vector vor fi în
aceeași ordine ca și cele din primul, cu excepția a m elemente din primul șir care vor lipsi din al doilea. Identifică
elementele lipsă, ținând cont că ele nu sunt neapărat pe poziții consecutive în primul șir.
Date de intrare
Pe prima linie se vor găsi numerele n și m, separate printr-un spațiu, iar pe următoarele două linii elementele celor
două șiruri.
Date de ieșire
Programul va afișa pe ecran, în ordinea în care apar în primul șir, separate prin câte un spațiu, cele m elemente
care lipsesc din al doilea șir. Dacă nu s-au pierdut date între cele două șiruri, programul va afișa pe ecran
mesajul "Nu s-au pierdut date".
Precizări și restricții
1 ≤ n ≤ 100 000
0 ≤ m < n
elementele din șir nu vor avea valori mai mari de 100 000, respectiv mai mici de -100 000
Exemple

Date de intrare                 Date de ieșire
7 3                              32 45 29

12 32 45 87 100 29 34
12 87 100 34
*/

#include <iostream>
using namespace std;

int main() {
    int n, m, x, i, ok = 0, v[100001], ap[200002], vmin = 100001, vmax = -100001, nr=0;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        cin >> v[i];
        if(v[i] < vmin)
            vmin = v[i];
        if(v[i] > vmax)
            vmax = v[i];
        ap[v[i]] = 1;
    }
    //for (int i = vmin; i <= vmax; ++i) {
    //    ap[i] = 0;
    //}
    //for (int i = 1; i <= n; ++i) {
    //    ap[v[i]] = 1;
    //}
    for (int i = 1; i <= n - m; i++) {
        cin >> x;
        ap[x] = 0;
    }
    if(m != 0) {
        for (int i = vmin; i <= vmax && nr < m; ++i) {
            if (ap[i] == 1) {
                cout << i << " ";
                ++nr;
            }
        }
    }
    else
        cout << "Nu s-au pierdut date";
    return 0;
}
