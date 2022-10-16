/*
Suma Fișier

Alex a organizat recent un eveniment cu strângere de fonduri pentru Lotul Național de Informatică. Fiecare
persoană participantă la eveniment a donat o sumă de bani. Alex dorește să facă un program care să calculeze
câți bani s-au strâns la eveniment, știind câte persoane au participat și cât a donat fiecare.
Date de intrare
Programul citește din fișierul donatii.in un număr n, reprezentând numărul de persoane participante la
eveniment, iar de pe următoarea linie n valori întregi, care reprezintă sumele de bani donate de fiecare persoană.
Date de ieșire
Programul va afișa pe ecran suma totală de bani adunată la eveniment.
Restricții și precizări
fiecare persoană donează o sumă de bani cuprinsă în intervalul [0, 1 000].
0 < n ≤ 100
ATENȚIE! Din cauza felului în care e evaluată această problemă, la încărcarea soluției pe platformă va trebui
să adaugi doar instrucțiunile din int main(), iar la final e foarte important să NU adaugi return 0;.
toate bibliotecile de care ai nevoie sunt deja incluse în program
Exemplu
Date de intrare
13
5 15 258 0 17 64 99 201 784 963 10 574 248
Date de ieșire
3238
*/
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int n, i, v[1001], sum = 0;
    ifstream fin ("donatii.in");
    fin >> n;
    for (i = 1; i <= n; ++i) {
        fin >> v[i];
    }
    for (i = 1; i <= n; ++i) {
        sum += v[i];
    }
    cout << sum;
    return 0;
}
