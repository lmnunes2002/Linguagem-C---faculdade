#include <iostream>

using namespace std;

int main(){
  int N1, N2, N3, N4, N5;
  int resultado;

  cin>>N1>>N2>>N3>>N4>>N5;
  resultado = N1 + N2 + N3 + N4 + N5;
  
  if(resultado > 5000){
    cout<<"Acesso proibido"<<endl;
  } else if (resultado <= 5000){
    cout<<"Acesso liberado"<<endl;
  }
}