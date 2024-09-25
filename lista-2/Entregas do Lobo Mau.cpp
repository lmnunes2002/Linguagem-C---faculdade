#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  int T, D, V, P;

  cin>>T>>D;
  cin>>V>>P;

  cout<<T * V + (T / D) * P<<endl;
}