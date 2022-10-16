/*
Element Lipsa 4
În problema anterioară ai studiat cazul fericit în care un singur pachet dintr-un grup de n pachete transmise prin
rețea folosind protocolul UDP se pierde pe drum. De data aceasta, nivelul de aglomerație al rețelei face să se
piardă nu doar unul, ci m pachete! Poți să identifici cât mai rapid pachetele pierdute, înainte să înceapă un nou
sezon de Black mirror și să ajungă și mai puține pachete la tine?
Cerință
Ți se dă un șir de n numere întregi, reprezentând pachetele trimise și un alt șir cu n - m numere întregi,
reprezentând pachetele care au ajuns cu succes până la tine.
Elementele din cel de-al doilea șir NU vor fi în aceeași ordine ca și cele din primul. Totuși în cazul în care există mai
multe pachete cu aceeași valoare, ele ajung în ordinea pozițiilor din șirul inițial.
În plus, toate valorile din al doilea șir se găsesc și în primul. Identifică elementele lipsă, ținând cont că ele nu sunt
neapărat pe poziții consecutive în primul șir.
Date de intrare
Pe prima linie se vor găsi numerele n și m, separate printr-un spațiu, iar pe următoarele două linii elementele celor
două șiruri.
Date de ieșire
Programul va afișa pe ecran, în ordinea în care apar în primul șir, separate prin câte un spațiu, cele m elemente
care lipsesc din al doilea șir. Dacă nu s-au pierdut date între cele două șiruri, programul va afișa pe ecran
mesajul Nu s-au pierdut date.
Precizări și restricții
1 ≤ n ≤ 1 200
0 ≤ m < n
elementele din șir nu vor avea valori mai mari de 100 000, respectiv mai mici de -100 000
Exemple

Date de intrare             Date de ieșire
7 3                         45 29 32
12 34 45 29 100 87 32
100 87 12 34
*/

#include <iostream>
using namespace std;

int main() {
    int n, m, x, i, j, v[1201], k = 1;
    cin >> n >> m;
    for (i = 1; i <= n; ++i) {
        cin >> v[i];
    }
    int lungime_sir2 = n - m;
    for (i = 1; i <= lungime_sir2; ++i) {
        cin >> x;
        for (j = 1; j <= n; ++j) {
            if (v[j] == x) {
                k = j;
                break;
            }
        }
            for (j = k; j < n; ++j) {
                v[j] = v[j + 1];
            }
        --n;
    }
    if (m == 0) {
        cout << "Nu s-au pierdut date";
    }
    for (i = 1; i <= n; ++i) {
        cout << v[i] << " ";
    }
    return 0;
}
