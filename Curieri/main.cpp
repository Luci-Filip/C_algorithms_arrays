/*
Curieri

Acum că ai învățat programare, ai început să observi în jurul tău tot felul de procese care ar putea fi optimizate.
De exemplu, ți-e clar că dacă un curier are de livrat colete la 5 case diferite, există un mod de a ordona cele 5
adrese astfel încât timpul total parcurs de curier să fie minim.
În orașul tău natal operează o singură firmă de curierat, Curier Rapid la Ușa Ta SRL. Te-ai oferit să îi ajuți să își
organizeze mai bine curierii din firmă, astfel încât să poată livra colete mai multe, mult mai rapid. Ai scris un
program care, având n adrese, calculează folosind Google maps distanța dintre oricare 2 adrese din listă. Apoi, ai
aflat pentru fiecare din adrese care e următoarea adresă la care se poate deplasa curierul cel mai rapid,
pornind de la ea.
Acum ai în fața ta rezultatul: Un șir de n valori întregi distincte, reprezentând indicii adreselor, unde valoarea de pe
poziția i reprezintă indicele casei la care trebuie să se deplaseze un curier după ce a vizitat casa cu indice i.
De exemplu, pentru șirul 2 3 4 1, valoarea de pe poziția 1 e 2, ceea ce înseamnă că dacă pornește din 1, va merge
mai departe la casa 2. Încearcă să completezi singur șirul de indici înainte să citești mai departe!
El va merge de la 2 la 3, apoi de la 3 la 4 și la final de la 4 la 1, trecând astfel pe la toate casele.
Ai observat că în unele cazuri se creează mai multe zone, în care un curier pornește dintr-un punct și ajunge în
același punct la final. De exemplu, șirul 2 3 1 5 4 are 2 zone: 1 2 3 și 4 5 (urmărește parcursul unui curier care
pleacă din punctul 1, 2, 3, 4 sau 5 pentru a afla de ce).
Scrie acum un program care primește un astfel de șir și afișează numărul de zone distincte din șir, pentru a putea
să propui alocarea câte unui curier fiecărei zone!
Date de intrare
Pe prima linie se va găsi numărul n, iar pe următoarea linie elementele șirului.
Date de ieșire
Programul va afișa pe ecran un număr întreg, reprezentând numărul de zone formate ordonând casele conform
șirului de indici citit.
Precizări și restricții
0 ≤ n ≤ 1 000
elementele din șir vor avea valori întregi distincte de la 1 la n
Exemplu:
Date de intrare         Date de ieșire
9
4 2 9 1 3 7 8 6 5           4

Explicație:
Zonele sunt: (1, 4), (2), (3, 5, 9), (6, 7, 8)

*/

#include <iostream>
using namespace std;

int main() {
    int n, i, j, first_house = 0, area = 0, aux_index, v[1001];
    cin >> n;
    for (i = 1; i <= n; ++i) {
        cin >> v[i];
    }
    for (i = 1; i <= n; ++i) {
        first_house = v[i];
        j = v[i];
        if (v[i] != 0) {
            while (first_house != v[j]) {
                aux_index = j;
                j = v[j];
                v[aux_index] = 0;
            }
            ++area;
        }
    }
    cout << area;
    return 0;
}
