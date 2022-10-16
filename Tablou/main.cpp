/*
Tablou

Paul este pasionat de colecționarea bancnotelor. Acesta și-a făcut chiar și un dosar în care colecționează
bancnote ale diferitelor țări. El dorește să își facă o copertă personalizată pentru dosarul său, care să conțină un
desen în formă de pătrat, cu marginea formată din caractere * și caractere $ în interior, dar nu știe cum să facă
acest lucru automat.
Paul te roagă pe tine să îi scrii un program care să genereze modelul de pe coperta dosarului, pentru a o printa
apoi la imprimantă.
Date de intrare
Se citește de la tastatură numărul n, reprezentând lungimea laturii pătratului.
Date de ieșire
Se va afișa pe ecran un pătrat cu marginile formate din caracterul * și interiorul din caracterul $.
Restricții și precizări
0 < n < 100
Exemplu
Date de intrare
4
Date de ieșire
****
*$$*
*$$*
****
*/
#include <iostream>
using namespace std;

int main () {
    int n, i, j;
    cin >> n;
    for (i = 1; i <= n; ++i) {
        for (j = 1; j <= n; ++j) {
            if ((i == n || j == n) || (i == 1 || j == 1)) {
                    cout << "*";
            } else {
                    cout << "$";
            }
        }
        cout << "\n";
    }
    return 0;
}
