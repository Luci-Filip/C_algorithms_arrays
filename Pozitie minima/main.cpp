/*
Poziție Minimă

Andrei şi Mihai doresc să aplice pentru acelaşi post în echipa WellCode. Deoarece echipa WellCode este
compusă din programatori de elită, doar cei mai buni pot ajunge să faca parte din aceasta.
Pentru a-l recruta pe cel mai bun, Petru şi Bianca le-au cerut celor 2 candidați să scrie un program care, pentru
un şir de n numere naturale sortat crescător și o valoare x dată, să determine poziţia minimă p pe care se găsește
valoarea x în şir.
Va intra în echipa Wellcode cel al cărui program va executa sarcina cel mai rapid. Testează-ți și tu abilitățile și
rezolvă problema aici, pe platformă 💪
Date de intrare
Programul citește de la tastatură, de pe prima linie, numărul natural n. De pe următoarea linie se citește șirul de n
numere naturale, sortate crescător. De pe a treia linie se citește un număr natural m, iar de pe a patra se citesc m
numere naturale, reprezentând valori posibile pentru x.
Date de ieșire
Afișează, pentru fiecare dintre cele m numere citite, poziția minimă pe care se găsește în șirul inițial. Valorile vor fi
afișate separate prin spații, iar numerotarea pozițiilor se va face începând cu valoarea 1.
Restricții și precizări
1 ≤ n ≤ 500 000
numerele din şir vor avea valori în intervalul [0, 500]
1 ≤ m ≤ 100 000
1 ≤ x ≤ 500
se garantează că valorile lui x citite există întotdeauna în şirul dat
Exemple
Date de intrare
10
1 2 3 4 4 4 5 6 6 7
4
2 4 5 6
Date de ieșire
2 4 7 8
*/

#include <iostream>
using namespace std;

int main() {
    int n, m, x, i, v[10001], fr[500];
    cin >> n;
    for (i = 1; i= 500; ++i) {
        fr[i] = 0;
    }
    for (i = 1; i <= n; ++i) {
        cin >> v[i];
    }
    for (i = 1; i <= n; ++i) {
        cin >> m;
        if (fr[v[i]] != 0) {
            ++fr[v[i]];
        }
    }
    for (i = 1; i <= m; ++i) {
        cin >> x;
        cout << fr[x] << " ";
    }

    return 0;
}
