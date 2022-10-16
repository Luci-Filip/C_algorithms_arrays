/*
Înmulțire

Gigel a învăţat că înmulţirea este de fapt o adunare repetată. El nu a înţeles încă acest concept şi, pentru a
înţelege, el are nevoie să îşi scrie fiecare etapă a înmulţirii.
Cerinţă
Dându-se două numere naturale a şi b, scrieţi fiecare rezultat parţial al înmulţirii numerelor a şi b, adică a, 2 * a, 3 *
a, ... ,b * a.
Date intrare
De la tastatură se vor citi două numere, a şi b, cu semnificaţiile din enunţ (întotdeauna se scriu multiplii primului
număr).
Date de ieşire
Pe ecran se vor scrie b numere, fiecare rezultat parţial al înmulţirii celor două numere.
Restricţii
0 < a < 1 001
0 < b < 1 001
Exemplu

Date de intrare             Date de ieşire
5 3                          5 10 15

Explicație
5 * 1 = 5
5 * 2 = 10
5 * 3 = 15
*/

#include <iostream>

using namespace std;

int main() {
    int a, b, i = 1;
    cin >> a >> b;
    for (i = 1; i <= b; ++i) {
    cout << a * i << " ";
    }
    return 0;
}
