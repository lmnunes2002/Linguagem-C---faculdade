#include <iostream>

using namespace std;

int main(){
  int A, B, C;

  cin>>A>>B>>C;

  if(C + 1 <= B * A){
    cout<<"S"<<endl;
  } else{
    cout<<"N"<<endl;
  }
}