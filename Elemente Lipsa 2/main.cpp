/*
Element Lipsa 2

Curios să afli mai multe despre cauzele pentru care viteza ta la internet nu e constantă, ai început să citești
despre diferite protocoale de transmitere a datelor în rețea. Printre altele, ai aflat că protocolul UDP nu oferă
garanția că pachetele vor ajunge la destinație în totalitate. Asta explică problema pe care o ai uneori când
vorbești cu mama ta pe Skype și unele propoziții nu mai ajung până la tine.
Totuși, ai aflat un alt lucru interesant: UDP nu garantează nici că pachetele ajung la destinație în ordinea în care
au fost trimise. Oare din cauza asta simți uneori că discuția se îndreaptă în prea multe direcții simultan?
Cerință
Ți se dă un șir de n numere întregi, reprezentând pachetele trimise și un alt șir cu n - 1 numere întregi,
reprezentând pachetele care au ajuns cu succes până la tine. Elementele din cel de-al doilea șir NU vor fi în
aceeași ordine ca și cele din primul, dar toate valorile din al doilea șir se găsesc și în primul. Identifică elementul
care se găsește în primul șir, dar lipsește din al doilea.
Date de intrare
Pe prima linie se va găsi numărul n, iar pe următoarele două linii elementele celor două șiruri.
Date de ieșire
Programul va afișa pe ecran numărul x, care reprezintă elementul lipsă din cel de-al doilea șir.
Precizări și restricții
1 ≤ n ≤ 1 000
elementele din șir nu vor avea valori mai mari de 100 000, respectiv mai mici de -100 000
Exemple

Date de intrare                     Date de ieșire
10                                      -67
32 34 89 -67 45 21 34 5 9 7
34 32 45 89 34 21 5 7 9
*/

#include <iostream>
using namespace std;

int main() {
    int n, i, x, v[1001],fr[200001];
    cin >> n;
    for (i = 1 ; i <= n; ++i) {
        cin >> v[i];
        //fr[v[i]] = 1;
    }
    for (i = 1; i <= n - 1; ++i) {
        cin >> x;
        fr[x] = 1;
    }
    for (i = 1; i <= n; ++i) {
        if (fr[v[i]] != 1) {
            cout << v[i];
            break;
        }
    }
    return 0;
}
