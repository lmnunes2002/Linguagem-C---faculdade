#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int X;
  float N1, N2, N3, N4, N5;
  
  cin>>X>>N1>>N2>>N3>>N4>>N5;

  cout<<X<<" "<<fixed<<setprecision(1)<<(N1 + N2 + N3 + N4 + N5)/5<<endl;
}
