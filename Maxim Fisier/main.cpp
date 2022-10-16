/*
Maxim Fișier

Mike folosește o aplicație care îi contorizează numărul de pași făcuți într-o zi. La fiecare n zile, iși face un raport cu
numărul maxim de pași pe care i-a făcut într-o zi din această perioadă.
Deoarece sunteți foarte buni prieteni și a aflat că te-ai apucat de programare, Mike te-a rugat să îi faci o
aplicație care să determine numărul maxim de pași pe care i-a făcut într-o zi, dintr-un interval de n zile.
Date de intrare
Se va citi de la tastatură numărul n, reprezentând numărul de zile din intervalul ales, iar de pe urmatoarea linie n
valori întregi, reprezentând numărul de pași făcuți în fiecare din cele n zile.
Date de ieșire
Programul va afișa în fișierul maxim.out numărul maxim de pași pe care Mike i-a facut în cele n zile.
Restricții și precizări
1 ≤ n ≤ 100
-1 000 ≤ numărul de pași ≤ 1 000
ATENȚIE! Din cauza felului în care e evaluată această problemă, la încărcarea soluției pe platformă va trebui
să adaugi doar instrucțiunile din int main(), iar la final e foarte important să NU adaugi return 0;.
fişierul trebuie închis la finalul programului
toate bibliotecile de care ai nevoie sunt deja incluse în program
Exemplu

Date de intrare                                     Date de ieșire
15                                                  74
20 15 74 32 -32 57 47 21 19 2 74 12 0 -15 25
*/

#include <fstream>
#include <iostream>
using namespace std;

int main() {
    int n, i, vmax = -1000, x;
    ofstream fout ("maxim.out");
    cin >> n;
    for (i = 1; i <= n; ++i) {
        cin >> x;
        if (x > vmax) {
            vmax = x;
        }
    }
    fout << vmax;
    fout.close();
    return 0;
}
