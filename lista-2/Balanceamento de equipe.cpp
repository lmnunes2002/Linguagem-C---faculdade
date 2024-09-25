#include <iostream>
using namespace std;

int main(){
    int j, p;
    bool tanque, suporte;

    cin >> j;

    for(int i = 0; i <= j; i++){
        cin >> p;

        if (p == 1){
            tanque = true;
        }

        if (p == 2){
            suporte = true;
        }
    }

    if (suporte && tanque){
        cout << "Equipe Balanceada";
    } else {
        cout << "Equipe Desbalanceada";
    }
}