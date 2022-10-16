#include <iostream>
using namespace std;

int main() {
  int N, v[100001], x;
  cin>>N;
  for (int i = 1; i <= N; ++i)
    cin>>v[i];
  cin>>x;

  // Prima data cautam in tot sirul, de la pozitia 1 pana la N
  int stanga = 1, dreapta = N, m;
  // Cat timp subsecventa are mai mult de un element, o injumatatim alegand
  // fie jumatatea din stanga, fie cea din dreapta
  while (stanga < dreapta) {
    m = (stanga + dreapta) / 2;
    if (v[m] < x)
      stanga = m + 1;
    else
      dreapta = m;
  }
  // am ajuns la o subsecventa cu un singur element
  if (v[stanga] == x)
    cout << x << " se gaseste in sir";
  else
    cout << x << " nu se gaseste in sir";
  return 0;
}
