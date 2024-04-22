#include <iostream>

using namespace std;

int main(){
  //Declaração de variáveis.
  int x, y, resultado;
  char op;

  //Definição de variáveis.
  cout<<"Digite 2 inteiros"<<endl;
  cin>>x>>y;

  cout<<"Digite uma operação(+, -, /, *)"<<endl;
  cin>>op;

  //Estrutura de escolha.
  while(op == '+' || op == '-' || op == '/'|| op == '*'){
    switch(op){
      case '+':
        resultado = x + y;
        break;
      case '-':
        resultado = x - y;
        break;
      case '/':
        resultado = x / y;
        break;
      case '*':
        resultado = x * y;
        break;
  }

  cout<<"Digite uma operação(+, -, /, *)"<<endl;
  cin>>op;
    
  }
 
  //Exibindo resultados.
  cout<<"=== Exibindo resultados ==="<<endl;
  cout<<"Seu resultado é "<<resultado<<endl;						
}
