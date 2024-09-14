#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  double X, Y, R;
  int var1, var2;

  cin>>X>>Y>>R;
  var1 = X/(R*2);
  var2 = Y/(R*2);
 
  cout<<fixed<<setprecision(2)<<var1 * var2;
}
