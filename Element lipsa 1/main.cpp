/*
Element Lipsa 1

Transmiterea datelor de la un calculator la altul în cadrul unei rețele se face "ca prin magie" în cazul conexiunilor
de mare viteză. Totuși, când locuiești pe o stradă unde nimeni nu și-a tras fibră optică și ești singurul care vrea să
se uite la TED Talks pe YouTube, transmisia începe să pară mai puțin magică.
Fiecare informație se transmite pe internet sub forma unui grup de pachete. În cazul în care vrei să faci video
streaming de pe YouTube, faptul că se mai pierde din când în când câte un pachet pe drum poate să treacă
neobservat și să poți viziona videoclipul dorit cu succes.
Să presupunem că ai putea observa pachetele care ajung la calculatorul tău într-o perioadă de 1 minut. Putem
să reprezentăm aceste pachete ca un șir de numere întregi. De asemenea, de cealaltă parte a rețelei se pot
observa pachetele care au fost trimise.
Cerință
Ți se dă un șir de n numere întregi, reprezentând pachetele trimise și un alt șir cu n - 1 numere întregi,
reprezentând pachetele care au ajuns cu succes până la tine. Elementele din cel de-al doilea șir vor fi în aceeași
ordine ca și cele din primul, cu excepția unui element din primul șir care va lipsi din al doilea. Identifică elementul
lipsă.
Challenge: Poți să rezolvi problema parcurgând elementele din fiecare șir o singură dată? 😎
Date de intrare
Pe prima linie se va găsi numărul n, iar pe următoarele două linii elementele celor două șiruri.
Date de ieșire
Programul va afișa pe ecran numărul X, care reprezintă elementul lipsă din cel de al doilea șir.
Precizări și restricții
1 ≤ n ≤ 1 000
elementele din șir nu vor avea valori mai mari de 100 000, respectiv mai mici de -100 000
Există o soluție a problemei care folosește un singur for (excluzând citirea). Poți să o găsești?
Exemple
Date de intrare                         Date de ieșire
10                                          -67
34 32 45 -67 89 21 34 5 7 9
34 32 45 89 21 34 5 7 9
*/

#include <iostream>
using namespace std;

int main() {
    int n, i, x, element_1 = 0, v[1001];
    cin >> n;
    for (i = 1; i <= n; ++i) {
        cin >> v[i];
    }
    for (i = 1; i <= n; ++i) {
        cin >> x;
        if (v[i] != x) {
            element_1 = v[i];
            ++i;
        }
    }
    cout << element_1;
    return 0;
}
