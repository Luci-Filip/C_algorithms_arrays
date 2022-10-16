#include <iostream>
using namespace std;

int v[50001];

int cautareBinara(int stanga, int dreapta, int val) {
    while (stanga <= dreapta) {     /// 5 12 15 17 20 2 4    <->   1 15 5 7
        /*cout << "Caut: " << val << " in [";
        for(int i = stanga; i <= dreapta; i++)
            cout << v[i] << ", ";
        cout << "] st: " << stanga << " dr: " << dreapta;*/

        int m = (stanga + dreapta) / 2;
        //cout << " mid: " << m << " (" << v[m] << ") \n";
        if(v[m] == val)
            return m;
        if (v[m] < val)
            stanga = m + 1;
        else
            dreapta = m - 1;
    }
    //cout << "\n\n";
    return -1;
}

int main() {
    int n, k, x;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    cin >> k;
    for (int i = 1; i <= k ; ++i) {
        cin >> x;
        int rezultat = cautareBinara(0, n - 1, x);
        if (rezultat != -1) {
            cout << x << " se gaseste in sir\n";
        } else {
            cout << x << " nu se gaseste in sir\n";
        }
    }
    return 0;
}
/*
7
5 12 15 17 20 2 4
4
1 15 5 7
*/
