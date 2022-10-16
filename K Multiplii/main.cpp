/*
K Multipli

Andrei este colecționar de timbre. Deoarece are prea multe timbre și loc de depozitare cam puțin, s-a gândit să îi
ofere o parte din ele unui prieten de-al său, la fel de pasionat. Fiindcă este atașat de fiecare timbru în parte,
Andrei nu poate alege pe care timbre să le dea cadou, așa că s-a gândit la o modalitate de a alege automat
timbrele.
Acesta are un număr n de timbre, iar fiecare timbru are un număr de ordine de la 0 la n - 1. El s-a gândit să îi
ofere prietenului său k timbre, și anume cele cu cel mai mare număr de ordine mai mic decât n, care să fie
multipli ai unui număr ales p.
Date de intrare
Programul citește de la tastatură numărul natural n, reprezentând numărul de timbre din colecție, un număr k,
reprezentând numărul de timbre pe care Andrei vrea să le ofere, urmat de un alt număr p, numărul ai cărui
multipli îi căutăm.
Date de ieșire
Programul va afișa pe ecran numerele de ordine ale timbrelor pe care Andrei i le va oferi prietenului său, în ordine
descrescătoare.
Restricții si precizări
0 < n ≤ 2 500
0 < k < 25
0 < p ≤ 100
Se garantează că pentru fiecare test există soluție
Exemplu

Date de intrare         Date de ieșire
158 4 11                154 143 132 121
*/

#include <iostream>
using namespace std;

int main() {
    int n, k, p, i, nr = 0, pas = 1;
    cin >> n >> k >> p;
    for (i = n - 1; i >= 0 && nr < k; i -= pas)
        if (i % p == 0 ) {
            pas = p;
            ++nr;
            cout << i << " ";
        }
    return 0;
}
