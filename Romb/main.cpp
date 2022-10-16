/*

*-romb

Cerință
Andreea se ocupă de aranjarea unei săli. De data aceasta trebuie să picteze pe pereți niște modele în formă de
romb, însă nu crede că se va descurca decât dacă primește și schița digitalizată. Astfel, ea vă dă diagonala
rombului, iar voi va trebui să îl reprezentați.
Sarcina ta e să formezi un romb (după modelul din exemplu) cu ambele diagonale de lungime n, laturile formate
din *, iar interiorul conținând doar spații.
Date de intrare
Se citește un singur număr natural n, lungimea diagonalelor rombului.
Date de ieșire
Se vor afișa n linii, reprezentând "desenul" cerut.
Restricții
3 ≤ n ≤ 100
Se garantează că n este impar
Exemplu
Pentru n = 5 se va afișa
    *
   * *
  *   *
   * *
    *
*/

#include <iostream>
using namespace std;

int main() {
    int n, i, j, step = 0;
    cin >> n;
    int middle = n / 2 + 1;
    for (i = 1; i <= n; ++i){
        for (j = 1; j <= n; ++j) {
            if ((j == middle + step) || (j == middle - step)) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        if (i < middle) {
                ++step;
            } else {
                --step;
            }
            cout << "\n";
    }
    return 0;
}
