/*
Ordonare Clădiri

Un arhitect a fost angajat să restaureze toate clădirile vechi ale orașului. Acestuia i-a fost înmânat un document
cu toate clădirile ce necesită restaurare, respectiv o listă cu înălțimea fiecărei clădiri. Deoarece curând are loc un
eveniment important în oraș, arhitectului i s-a cerut să restaureze cât mai multe clădiri până la data
evenimentului.
Pentru a se asigura că reușeste să restaureze cât mai multe clădiri într-un timp cât mai scurt, acesta dorește să
înceapă cu cele mai scunde clădiri. Te-ai oferit să îl ajuți, scriind un program care să sorteze crescător înălțimile
clădirilor.
Date de intrare
Se citește de la tastatură un număr natural n, reprezentând numărul total de clădiri ce trebuiesc restaurate,
respectiv un șir de n numere întregi, reprezentând înălțimile clădirilor - în milimetri.
Date de ieșire
Programul va afişa pe ecran înălțimile clădirilor, sortate crescător, separate prin spații.
Restricții și precizări
1 ≤ n ≤ 1 000
înălțimile clădirilor sunt numere întregi care aparțin intervalului [-2 000 000 000, 2 000 000 000]
Exemplu
Date de intrare
7
41730 939963 571901 9571 553691 751366 367571
Date de ieșire
9571 41730 367571 553691 571901 751366 939963
*/

#include <iostream>
using namespace std;

int main() {
    int n, i, j, aux, v[1001];
    cin >> n;
    for (i = 1; i <= n; ++i)
        cin >> v[i];
    for (i = 1; i < n; ++i)
        for (j = i + 1; j <= n; ++j)
            if (v[i] > v[j]) {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
    }
    for (i = 1; i <= n; ++i)
        cout << v[i] << " ";
    return 0;
}
