#include <iostream>

using namespace std;

int main() {
  //Declaração de variáveis.
  int x, y, z;
  int valorMaior = 0, valorMedio = 0, valorMenor = 0;

  //Definição de variáveis.
  cout << "\nDigite o valor de X, Y e Z: " << endl;
  cin >> x >> y >> z;
  
  //Condicional.
  if(x > y && y > z){
    valorMaior = x;
    valorMedio = y;
    valorMenor = z;
  } else if (y > z && z > x){
    valorMaior = y;
    valorMedio = z;
    valorMenor = x;
  } else if (z > y && y > x){
    valorMaior = z;
    valorMedio = y;
    valorMenor = x;
  }

  //Exibindo resultados.
  cout << "\n=== Exibindo Resultados ===" << endl;
  cout << "Valor Maior: " << valorMaior << endl;
  cout << "Valor Medio: " << valorMedio << endl;
  cout << "Valor Menor: " << valorMenor << endl;
}
