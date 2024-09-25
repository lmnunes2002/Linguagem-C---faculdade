#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  int A, B, C, D, E, F;
  float resultado;

  cin>>A>>B>>C>>D>>E>>F;
  resultado = (A + B) * (C - D) * (E + F) / (float) 2;

  cout<<"Eu sou FERA nas continhas e o resultado é "<<fixed<<setprecision(1)<<resultado<<endl;
}