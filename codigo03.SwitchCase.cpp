#include <iostream>

using namespace std;

int main(){
	//Declaração de variáveis.
	int x, y, resultado;
	char op;
	
	//Definição de variáveis.
	cout<<"Digite 2 inteiros"<<endl;
	cin>>x>>y;
	
	cout<<"Digite uma operação(+, -, /, *)"<<endl;
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
			cout<<"Digite uma operação válida"<<endl;
	}
	
	//Exibindo resultados.
	cout<<"=== Exibindo resultados ==="<<endl;
	cout<<"Seu resultado é"<<resultado<<endl;						
}
