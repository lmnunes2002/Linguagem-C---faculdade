#include <iostream>

using namespace std;

int main() {
  int N;

  cin>>N;

  cout<<N/365<<" ano(s)"<<endl;
  cout<<(N%365)/30<<" mes(es)"<<endl;
  cout<<(N%365)%30<<" dia(s)"<<endl; 
}
