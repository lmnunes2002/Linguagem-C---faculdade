#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int N;
  int ataqueBase = 150, danoFinal;
  float ataqueItem = ataqueBase * 1.15;

  cin>>N;

  danoFinal = (N * ataqueItem) / (float) 2;

  cout<<setprecision(3)<<danoFinal<<endl;
}
