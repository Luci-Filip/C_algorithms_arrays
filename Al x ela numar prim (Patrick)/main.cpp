#include <iostream>
using namespace std;

/*
!(a > b) <=> a <= b
!(a < b) <=> a >= b
!(a >= b) <=> a < b
!(a <= b) <=> a > b

!(1) <=> 0
!(0) <=> 1

!(p && q) <=> !p || !q
!(p || q) <=> !p && !q

p   q   p && q  !(p && q)  !p   !q   !p || !q
0   0     0         1       1    1       1
0   1     0         1       1    0       1
1   0     0         1       0    1       1
1   1     1         0       0    0       0
*/

int main() {

    int n, prim, x = 2, y = 0;
    cin >> n;
    while (y < n) {
        prim = 1;
        if (x < 2)
            prim = 0;
        if (x % 2 == 0 && x != 2)
            prim = 0;
        for (int d = 3;d <= x / 2; d += 2)
            if (x % d == 0)
                prim = 0;
        if (prim == 1)
            ++y;
        ++x;
    }
    cout << x - 1;
    return 0;
}
