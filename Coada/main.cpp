/*
Coada

Cerință
Toată lumea știe că munca de birou poate deveni foarte stresantă și obositoare, mai ales la sfârșitul zilei. Fiind
peste program, Andrei speră că va reuși să termine treaba cât de repede pentru a putea pleca acasă.
Acesta are pe masă un teanc de foi pe care trebuie să le semneze, iar fiecare foaie are un număr de identificare,
număr natural. Din când în când mai apare și Mihai în birou, care și el stă peste program și compune documente.
Mihai adaugă câte o foaie dedesubtul celor existente pe masă, fără a schimba ordinea acestora. Andrei ia câte o
foaie din vârful teancului, o semnează și o pune deoparte.
Pentru a-l ajuta să termine treaba mai repede, te-ai oferit să îi creezi un roboțel care să gestioneze teancul cu foi.
Asta înseamnă că Andrei doar va trebui să semneze foile care îi sunt puse sub nas, iar roboțelul se va ocupa să
adauge documente primite de la Mihai în teanc și să extragă documentul pe care i-l va da lui Andrei la semnat.
Bineînțeles, deoarece ziua este scurtă, Andrei nu va reuși să termine toată treaba nici măcar cu ajutorul
roboțelului tău. Roboțelul a înregistrat m operații pe care le-a făcut în orele în care a fost activ. Afișează numerele
de identificare ale foilor rămase în urma celor m operații.
Date de intrare
Pe prima linie se află două numere, n și m.
Pe următoarele linii se află n numere naturale, numerele de identificare a foilor aflate inițial pe masă (primul
număr este asociat primei foi, al doilea număr este asociat celei de-a doua foi…).
Pe următoarele m linii se află operațiile ce trebuie făcute:
1 dacă trebuie extrasă prima foaie
2 urmat de o valoare x, dacă trebuie introdusă o nouă foaie la sfârșit, aceasta având numărul de identificare
x.
Date de ieșire
Pe prima linie se va afișa numărul de foi rămase pe biroul lui Andrei în urma executării celor m operații, iar pe a
doua linie, numerele de identificare ale acestora.
Restricții
1 ≤ n ≤ 900 000
1 ≤ m ≤ 400 000
Numerele de identificare sunt cuprinse intre 0 și 10 000, inclusiv
Dacă șirul nu mai conține niciun element și trebuie efectuată o operație de tip 1, operația nu va fi efectuată.
Observații
În rezolvarea acestei probleme vei folosi coada. Asemenea stivei, coada este o structură de date care folosește
elemente de același tip: int, double, etc. Operațiile de bază sunt adăugarea și stergerea, care se întâmplă doar la
capetele acesteia. Pentru a vizualiza mai bine, gândește-te la coada unui magazin, unde primul ce se așează la
coadă va plăti, iar ceilalți se vor așeza ultimii. Altfel spus, aceasta se bazează pe principiul primul venit, primul
servit.
Avantajele acesteia sunt viteza mare pentru operații și implementarea simplă. Câteva aplicații ale acesteia din
viața de zi cu zi sunt: jocul Snake, programarea task-urilor unui processor, dar și coada de așteptare de la
serviciile de taximetrie.
Exemplu:
Date de intrare        Date de ieșire
4 3                     5
30 21 81 26             21 81 26 68 64
2 68
2 64
1
*/

#include <iostream>
using namespace std;

int main() {
    int n, v[13001], m, i, j = 1, x, k;
    cin >> n >> m;
    for (i = 1; i <= n; ++i) {
        cin >> v[i];
    }
    for (i = 1; i <= m; ++i) {
        cin >> k;
        if (k == 1 && n != 0) {
            if(j <= n)
                ++j;
        }
        if (k == 2) {
            cin >> x;
            ++n;
            v[n] = x;
        }
    }
    cout << n - j + 1 << "\n";
    for (i = j; i <= n; ++i) {
        cout << v[i] << " ";
    }
    return 0;
}
/*


#include <iostream>
using namespace std;

int main() {
    int n, v[1301], m, i, j = 1, x, k;
    cin >> n >> m;
    for (i = 1; i <= n; ++i) {
        cin >> v[i];
    }
    for (i = 1; i <= m; ++i) {
        cin >> k;
        if (k == 1 && n != 0) {
            ++j;
            if (j >= n)
                n = 0;
        }
        else if (k == 2) {
            cin >> x;
            ++n;
            v[n] = x;
        }
    }
    cout << n << "\n";
    for (i = j; i <= n; ++i) {
        cout << v[i] << " ";
    }
    return 0;
   }
*/
