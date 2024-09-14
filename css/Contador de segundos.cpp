#include <iostream>

using namespace std;

int main() {
  int N;
  
  cin>>N;

  cout<<N/3600<<"h "<<(N%3600)/60<<"m "<<(N%3600)%60<<"s"<<endl; 
}
