/*
Reverse

Cerință
Dalina are n bile așezate într-o linie, fiecare bilă având un număr natural scris pe ea. Ea citește valorile de pe bile
de la stânga la dreapta și le scrie pe o foaie. Fiind foarte ocupată în perioada aceasta, Dalina îți cere să o ajuți cu
reorganizarea și să inversezi șirul de numere înainte să ii înapoiezi foaia.
Date de intrare
Pe prima linie se află n, numărul de bile. Pe următoarea linie sunt n numere naturale, reprezentând valorile scrise
de Dalina pe foaie.
Date de ieșire
Se vor afișa n numere, reprezentând șirul inversat. Cele n numere se vor afla pe o singură linie, separate prin câte
un spațiu.
Restricții
1 ≤ n ≤ 100 000
Șirul conține numere naturale mai mici decât 1 000 000
Cerința problemei este să se memoreze elementele citite într-un șir și să se inverseze în memorie, nu doar
să se afișeze de la dreapta la stânga!
Această problemă poate apărea în cadrul interviurilor de angajare.
Exemplu
Date de intrare
5
4 3 5 7 8
Date de ieșire
8 7 5 3 4
*/

#include <iostream>
using namespace std;

int main() {
    int n, i, v[100001], inverd = 0;
    cin >> n;
    for (i = 1; i<= n; ++i) {
        cin >> v[i];
    }
    for (i = n; i >= 1; --i) {
            inverd = v[i];
    cout << inverd << " ";
    }
    return 0;
}
