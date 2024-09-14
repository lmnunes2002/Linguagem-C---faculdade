#include <iostream>

using namespace std;

int main() {
  int T, X, pontoTermino;

  cin>>T>>X;
  
  pontoTermino = X % T;

  cout<<pontoTermino<<endl;
}
