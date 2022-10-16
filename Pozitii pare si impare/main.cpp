/*
Poziții pare și impare

Cerință
Andrei a învățat astăzi ce este acela un număr par sau impar. Ca să fie sigură că a înțeles, învățătoarea lui i-a
dat un șir de numere și i-a cerut să afle diferența dintre suma numerelor de pe poziții pare și suma numerelor de
pe poziții impare.
Date de intrare
Pe prima linie se află n, numărul de elemente din șir. Pe următoarea linie se află n numere întregi, elementele
șirului.
Date de ieșire
Se va afișa un singur număr, rezultatul diferenței cerute.
Restricții
1 ≤ n ≤ 100 000
Deși este doar un mic învățăcel, Andrei deja știe operațiile cu numere întregi
Șirul conține numere întregi între -1 000 și 1 000
Exemplu
Date de intrare
5
-4 3 5 7 8
Date de ieșire
8
*/

#include <iostream>
using namespace std;

int main() {
    int n, i, v[200000], suma_par = 0, suma_impar = 0;
    cin >> n;
    for (i = 1; i <= n; ++i) {
        cin >> v[i];
    }
    for (i = 1; i <= n; ++i) {
        if (i % 2 == 0){
            suma_par += v[i];
        }
        else {
            suma_impar += v[i];
        }
    }
    cout << suma_par - suma_impar;
    return 0;
}
