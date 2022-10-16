/*
Al x-lea număr prim
Se dă un număr x. Se cere să se afișeze al x-lea număr prim.
Date de intrare
Se citește la tastatură numărul x.
Date de ieșire
Programul va afișa pe ecran al x-lea număr prim.
Restricții
0 < x < 1 001
Exemplu
Date de intrare      Date de ieșire
4                           7
*/

#include <iostream>
using namespace std;

int main() {

    int x, div = 0, contor = 2, y = 0;
    cin >> x;   /// 4
    while (y < x) {
        div = 0;
        for (int i = 1; i <= contor; ++i)
            if (contor % i == 0)
                div++;
        if (div == 2)
            ++y;
        ++contor;
    }

    cout << contor - 1; /// 7
    return 0;
}
