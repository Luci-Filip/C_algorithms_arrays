#include <iostream>
using namespace std;

int main() {
    int n, m, x, i, j, nr = 0, v[200002], continua_cautarea;
    cin >> n >> m;
    for (i = 1; i <= n; ++i) {
        cin >> v[i];
    }
    int k = 1;
    for (i = 1; i <= n - m; ++i) {
        cin >> x;
        continua_cautarea = 1;
        for (j = k; j <= n && continua_cautarea == 1; ++j) {
            if (v[j] != x) {
                cout << v[j] << " ";
                ++nr;
            }
            else {
                continua_cautarea = 0;
                k = j + 1;
            }
        }
    }
    for (j = k; j <= n; ++j) {
        cout << v[j] << " ";
    }
    if (m == 0) {
        cout << "Nu s-au pierdut date";
    }
    return 0;
}
