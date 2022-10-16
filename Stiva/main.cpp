/*
Stiva

Cerință
Se dă un șir de n numere întregi asupra căruia se fac următoarele operații: eliminarea ultimului element din șir
(pop) și adăugarea unui element x la finalul șirului (push x). Să se afișeze șirul după aplicarea operațiilor date.
Structura de date introdusă mai sus, asupra căreia se pot executa doar operații de tip push x și pop, se numește
stivă. Stiva este o structură de date des utilizată în informatică și se spune că are tipul last in, first out datorită
felului în care accesăm date salvate în ea. Aceasta este folosită atât la implementarea recursivității în limbajele
de programare, cât și ca structură auxiliară la traversarea unor structuri de date mai complicate, cum sunt
arborii și grafurile.
Date de intrare
Se citește numărul natural n, reprezentând numărul de elemente ale șirului inițial și n numere întregi, reprezentând
elementele șirului. Apoi se citesc m valori de k unde k poate avea valoarea 1 sau 2. Dacă k are valoarea 1, se va citi
imediat după acesta un număr întreg x şi se va efectua operaţia push x. Dacă k are valoarea 2 se va efectua
operaţia pop.
Date de ieșire
Se va afișa pe ecran șirul de numere obținut în urma aplicării operațiilor date asupra șirului inițial. Pe prima linie se
va afișa numărul t, reprezentând numărul de elemente ale noului șir, iar pe cea de a doua linie se vor afișa cele t
elementele ale șirului, separate prin spații.
Restricții şi precizări
n și m sunt numere naturale cuprinse în intervalul [1, 10 000].
Fiecare element din șir este cuprins în intervalul [-2 000 000 000, +2 000 000 000].
k va avea întotdeauna valoarea 1 sau 2.
x are valori cuprinse în intervalul [-2 000 000 000, +2 000 000 000].
Nu vor fi operatii de tipul 2 cand stiva e goala.
Exemplu
Date de intrare
7
5 -4 0 -7 7 7 2
5
2
1 100
2
1 0
1 3
Date de ieșire
8
5 -4 0 -7 7 7 0 3
*/

#include <iostream>
using namespace std;

int main() {
    int n, m, x, k, v[10001], i;
    cin>> n;
    for (i = 1; i <= n; ++i)
        cin>> v[i];
    cin>> m;
    for (i = 1; i <= m; ++i) {
        cin >> k;
        if (k == 1) {
            cin >> x;
            ++n;
            v[n] = x;
        }
        else if (k == 2)
            --n;
    }
    cout << n << "\n";
    for (i = 1; i <= n; ++i)
        cout<< v[i] <<' ';
    return 0;
}
