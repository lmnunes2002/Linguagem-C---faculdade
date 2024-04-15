#include <iostream>

using namespace std;

int main(){
  int x, y;
  char op;

  cout << "Digite 2 inteiros e uma operação: " << endl;
  cin >> x >> op >> y;

  if(op == '+'){
    cout << "Seu resultado é " << x+y << endl;
  } else if(op == '-'){
    cout << "Seu resultado é " << x-y << endl;
  } else if (if(op == '*'){
    cout << "Seu resultado é " << x*y << endl;
  } else if(op == '/'){
    cout << "Seu resultado é " << x/y << endl;
  } else{
    cout << "Digite uma operção válida" << endl;
  }
} 
