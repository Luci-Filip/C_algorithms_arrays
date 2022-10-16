#include <fstream>
#include <iostream>
using namespace std;

int main() {
  ifstream fin ("input.txt");
  ofstream fout ("output.txt");
  int n, x, suma = 0;
  fin >> n;
  while (fin >> x) {
    suma += x;
  }
  fout << suma;
  return 0;
}
