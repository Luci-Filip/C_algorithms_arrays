#include <iostream>
using namespace std;

int main() {
    int i, n, prima_pozitie = - 1, ultima_pozitie, v[101];
    cin >> n;
    for (i = 1; i <= n; ++i) {
        cin >> v[i];
    }
    for (i = 1; i <= n; ++i) {
        if (v[i] % 2 == 0) {
            if (prima_pozitie == - 1)
                prima_pozitie = i;
                ultima_pozitie = i;
        }
    }
    int suma = 0;
    for (i = prima_pozitie; i <= ultima_pozitie; ++i) {
        suma += v[i];
    }
    cout << suma << " ";
    return 0;
}
