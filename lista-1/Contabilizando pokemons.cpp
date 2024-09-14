#include <iostream>

using namespace std;

int main() {
  int K, J, H;
  int pokemonK, pokemonJ, pokemonH;

  cin>>K>>J>>H;

  cin>>pokemonK>>pokemonJ>>pokemonH;

  K += pokemonK;
  J += pokemonJ;
  H += pokemonH;

  cout<<K<<" "<<J<<" "<<H<<endl;
}
