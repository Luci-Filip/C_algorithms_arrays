#include <fstream>
using namespace std;

int main() {
  ifstream fin("date-intrare.txt");
  ofstream fout("date-iesire.txt");
  int a,b;
  fin>>a>>b;
  fout<<a+b;
  return 0;
}
