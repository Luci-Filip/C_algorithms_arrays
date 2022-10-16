/*
K Numere

Mihnea tocmai a început să înveţe informatică alături de un profesor. Pentru a se asigura că a înţeles tot ce i-a
predat până acum, profesorul i-a cerut lui Mihnea să scrie un program care să afişeze cele mai mari k numere
naturale mai mici decât n.
Mihnea îți cere ție ajutorul, simte că nu e încă pregătit. I-ai promis că îl ajuți, dacă te ajută și el data viitoare.
Date de intrare
Se citesc de la tastatură numerele n și k separate printr-un spațiu.
Date de ieșire
Se vor afișa pe ecran cele k numere naturale mai mici decât n, separate printr-un spațiu.
Restricții
k < n
2 < n < 1 000

Date de intrare         Date de ieșire
32 5                    31 30 29 28 27

16 3                    15 14 13
*/

#include <iostream>
using namespace std;

int main() {
    int n, k, i;
    cin >> n;
    cin >> k;
    for (i = n; i != n - k; --i)
        cout << i - 1 << " ";
    return 0;
}
