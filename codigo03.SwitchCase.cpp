#include <iostream>

using namespace std;

int main(){
	//Declara��o de vari�veis.
	int x, y, resultado;
	char op;
	
	//Defini��o de vari�veis.
	cout<<"Digite 2 inteiros"<<endl;
	cin>>x>>y;
	
	cout<<"Digite uma opera��o(+, -, /, *)"<<endl;
	cin>>op;
	
	//Estrutura de escolha.
	switch(op){
		case '+':
			resultado = x + y;
			break;
		case '-':
			resultado = x - y;
			break;
		case '/':
			resultado = x / y;
			break;
		case '*':
			resultado = x * y;
			break;
		default:
			cout<<"Digite uma opera��o v�lida"<<endl;
	}
	
	//Exibindo resultados.
	cout<<"=== Exibindo resultados ==="<<endl;
	cout<<"Seu resultado �"<<resultado<<endl;						
}
