/*
Multiplu Interval

Cu ocazia zilelor orașului, primarul s-a gândit să ofere un mic cadou cetățenilor. Deoarece nu are destule fonduri
pentru a acoperi cheltuielile cadourilor pentru toți cetățenii orașului, acesta s-a gândit să procedeze astfel:
Pe fiecare stradă există case numerotate de la a la b, inclusiv. Pentru a mulțumi cel puțin o parte din cetățeni,
primarul va oferi cadouri locuitorilor pentru care numărul casei lor e un multiplu al unui număr ales, k.
Fiind medaliat la ONI, primarul orașului te-a rugat să faci un program care să îl ajute cu modul de distribuire a
cadourilor pe fiecare stradă.
Date de intrare
Programul va citi de la tastatură numărul natural k, reprezentând numărul ai cărui multipli îi căutăm, numărul
natural a, reprezentând numărul primei case de pe o stradă dată și numărul natural b, reprezentând numărul
ultimei case de pe aceeași stradă.
Date de ieșire
Programul va afișa pe ecran numerele tuturor caselor ale căror locuitori vor primi câte un cadou de la primar.
Numerele vor fi separate prin spații.
Restricții și precizari
0 ≤ a, b < 1 000
a < b
0 < k < 100
Exemplu
Date de intrare
3 5 24
Date de iesire
6 9 12 15 18 21 24
*/

#include <iostream>
using namespace std;

int main() {
    int k, a, b, i;
    cin >> k >> a >> b;
    if (k == 0 && a == 0)
        cout << 0;
    else if (k != 0) {
        if (a == 0)
            cout << 0 << " ";
        for (i = k; i <= b; i += k)
            if (i >= a && i <= b)
                cout << i << " ";
    }
    return 0;
}
