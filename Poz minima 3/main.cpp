#include <iostream>
using namespace std;

int main() {
    int n, m, x, v[10001], fr[500];
    cin >> n;
    for (int i = 1; i < 500; ++i) {
        fr[i] = 0;
    }
    for (int i = 1; i <= n; ++i) {
        cin >> v[i];
    }
    for (int i = n; i >= 1; --i) {
        if (fr[v[i]] == 0) {
            fr[v[i]] = i;
        }
    }
    cin >> m;
    for (int i = 1; i <= m; ++i) {
        cin >> x;
        cout << fr[x] << " ";
    }
    return 0;
}
