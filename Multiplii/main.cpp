/*
Multipli

Cerință
Fiind un simplu zilier, George a primit ca și sarcină astăzi să marcheze un teren de 10 ori din n în n metri: la n metri,
2 * n metri, ... , 10 * n metri. De foarte multe ori s-a întâmplat să greșească la tabla înmulțirii așa că vă roagă pe
voi să ii spuneți exact unde trebuie marcat.
Astfel, dându-se o cifră n, să se afișeze primii 10 multipli nenuli ai acesteia.
Date de intrare
Se citește cifra n.
Date de ieșire
Se vor afișa 10 numere, separate prin câte un spațiu, reprezentând multiplii lui n. Aceștia vor fi afișați în ordine
crescătoare.
Restricții
1 ≤ n ≤ 9
Exemplu
Date de intrare
3

Date de ieșire
3 6 9 12 15 18 21 24 27 30

*/

#include <iostream>
using namespace std;

int main() {
    int n, i = 1;
    cin >> n;
    for (i = 1; i <= 10; ++i)
        cout << i * n << " ";
    return 0;
}
