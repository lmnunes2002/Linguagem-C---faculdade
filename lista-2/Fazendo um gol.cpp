#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  char z, g, d, c;

  cin>>z>>g>>d>>c;

  if(z != d){
    cout<<"Bloqueado"<<endl;
  } 
  
  if(z == d){
    cout<<"Driblado"<<endl;
    if(c == g){
      cout<<"Gol"<<endl;
    } else {
      cout<<"...e o goleiro pega"<<endl;
    }
  }
}