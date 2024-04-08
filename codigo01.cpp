#include <iostream>
using namespace std;

int main() {
  int resposta, N, C;

  cout << "Quantos Metros de corrida? ";
  cin >> N;

  cout << "Qual o comprimento da pista? ";
  cin >> C;
  
  resposta = N % C;
  
  cout << "\nO ponto de término é de: " << resposta << " metros" << endl;
  
  return 0;
}
