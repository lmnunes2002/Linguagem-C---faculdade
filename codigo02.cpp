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
  if(x >= y && x >= z){
    valorMaior = x;
    if(y >= z){
      valorMedio = y;
      valorMenor = z;
    } else {
      valorMedio = z;
      valorMenor = y;
    }
  } 

  if(y >= x && y >= z){
    valorMaior = y;
    if(x >= z){
      valorMedio = x;
      valorMenor = z;
    } else {
      valorMedio = z;
      valorMenor = x;
    }
  } 

if(z >= x && z >= y){
  valorMaior = z;
  if(x >= y){
    valorMedio = x;
    valorMenor = y;
  } else {
    valorMedio = y;
    valorMenor = x;
  }
} 
  
  //Exibindo resultados.
  cout << "\n=== Exibindo Resultados ===" << endl;
  cout << "Valor Maior: " << valorMaior << endl;
  cout << "Valor Medio: " << valorMedio << endl;
  cout << "Valor Menor: " << valorMenor << endl;
}
