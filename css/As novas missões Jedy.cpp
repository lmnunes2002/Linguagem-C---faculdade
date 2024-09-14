#include <iostream>

using namespace std;

int main() {
  int N, XP, XPiYoda, XPiLuke, XPiAhsoka;

  cin>>N>>XP;
  cin>>XPiYoda>>XPiLuke>>XPiAhsoka;

  XPiYoda += N * XP;
  XPiLuke += N * XP;
  XPiAhsoka += N * XP;

  cout<<"Yoda "<<XPiYoda<<endl;
  cout<<"Luke "<<XPiLuke<<endl;
  cout<<"Ahsoka "<<XPiAhsoka<<endl;
}
