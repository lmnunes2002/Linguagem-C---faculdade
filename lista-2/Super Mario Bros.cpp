#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  int SC, MM, CK;

  cin>>SC>>MM>>CK;

  if(SC == 30){
    cout<<"PROXIMO MUNDO"<<endl;
  } else {
    cout<<(30 - SC)<<" "<<(6 - MM)<<" "<<(3 - CK)<<endl;
  }
}