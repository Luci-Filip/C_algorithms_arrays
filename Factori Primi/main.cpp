/*
Factori Primi

Mihnea este profesor de matematică. Acesta urmează să le predea elevilor săi descompunerea în factori primi.
Deoarece este pasionat de materia lui, dar şi de informatică, acesta creează un program care să îi ajute pe elevii
săi să înţeleagă mai uşor materia. Programul descompune orice număr n în factori primi.
Încearcă şi tu sa faci un program asemănător cu cel făcut de Mihnea!
Date de intrare
Programul citeşte de la tastatură un număr natural n.
Date de ieşire
Programul afişează pe ecran descompunerea în factori primi ai numărului n sub forma x^p. Pe fiecare linie se va
afişa cate un factor prim la puterea la care intră în descompunere.
Restricţii şi precizări
1 < n ≤ 1 000
x va fi întotdeauna număr prim iar p este puterea la care se află numărul x în descompunerea în factori
primi.
în descompunerea în factori primi se vor afişa factorii în ordine crescătoare fiecare pe linii diferite.
Exemplu

Date de intrare             Date de ieșire
44                          2^2
                            11^1

*/

#include <iostream>
using namespace std;

int main() {
  int n, power = 0;
  cin >> n;
  int divisor = 2;
  while (n > 1){
    power = 0;
    while (n % divisor == 0) {
        ++ power;
        n /= divisor;
    }
    if (power > 0)
        cout << divisor << "^" << power << "\n";
    divisor += 1;
  }
  return 0;
}
